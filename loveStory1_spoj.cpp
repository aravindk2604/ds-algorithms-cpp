/*
    http://www.spoj.com/problems/PIHU1/
    Solving one of the challenges on SPOJ
    Time = 0.02 

    A[i] = first element of the array
    A[j] = second element of the array
    A[k] =  ?
    P = A[i] + A[j] + A[k];  i < j < k
    So, A[k] = P - A[i] - A[j];

    Use two for loops to iterate i and j through the array and use 
    binary search on the rest of the array elements to check for A[k]
*/

#include <bits/stdc++.h>
long long inputArray[1005];


int BinarySearch(int left_ind, int right_ind, long long number) {

    while(left_ind <= right_ind) {
        int mid = (left_ind + right_ind)/2;
        
        if(number == inputArray[mid]) return 1;
        else if(number < inputArray[mid]) right_ind = mid - 1;
        else left_ind = mid + 1;
    }
    return -1;

}

int main() {
    int testCases =0;
    int numOfElements =0;
    long long P = 0;
    long long check_num =0;
    int flag = 0;
    std::cin >> testCases;
    for(int m=0; m<testCases; ++m) {
        std::cin >> numOfElements;
        
        for(int i=0; i<numOfElements; ++i) {
            std::cin >> inputArray[i];
        }
        std::cin >> P;
        std::sort(inputArray+0, inputArray + numOfElements);
        flag = 0;
        for(int i=0; i<numOfElements-1; ++i) {
            // std::cout << "i: " << i << "\n";

            for(int j=i+1; j<numOfElements; ++j) {
                // std::cout << "j: " << j << "\n";
                
              check_num = P - inputArray[i] - inputArray[j];
                if(BinarySearch(j+1, numOfElements-1, check_num) == 1) flag = 1; 
                // else flag = 0;
            }
            
        }
        if(flag == 1) std::cout << "YES\n";
        else std::cout << "NO\n"; 
    }
    return 0;
}