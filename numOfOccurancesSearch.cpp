/*
    Find the number of times an element occurs in a given sorted array.
    Technique used is a Binary search and the first and last occurances are found
    Last - First = number of occurances.

*/

#include <bits/stdc++.h>

int inputArray[50];

int BinarySearch(int number, unsigned len, unsigned flag) {
    int left_ind = 0;
    int right_ind = len -1;
    int result =-1;

    while(left_ind <= right_ind) {
        int mid = (left_ind + right_ind)/2;

        if(number == inputArray[mid] ) {
            result = mid;
            if(flag == 0) right_ind = mid -1 ; // first occurance
            if(flag == 1) left_ind = mid + 1 ; // last occurance
        }

        else if(number < inputArray[mid]) right_ind = mid - 1;
        else left_ind = mid + 1;
    }
    return result;

}

int main() {
    unsigned numOfElements = 0;
    int check_num = 0;
    int F=0, L =0;

    std::cout << "Enter the number of elements in the array:\n";
    std::cin >> numOfElements;

    std::cout << "Enter the sorted elements of the array:\n";
    for(int i=0; i<numOfElements; ++i) {
        std::cin >> inputArray[i];
    }
    std::cout << "Enter the number to be found:\n";
    std::cin >> check_num;

    F = BinarySearch(check_num, numOfElements, 0);
    L = BinarySearch(check_num, numOfElements, 1);
    
    std::cout << check_num << " occured " << ((L-F) > 0 ? (L-F+1) : 0) << " times in the array.\n";

    return 0;
}