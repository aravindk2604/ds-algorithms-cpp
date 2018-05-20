/*
  Given a sorted input integer array, do a binary search to find the 
  requested value

*/

#include <bits/stdc++.h>
int inputArray[50];

int BinarySearch(int number, int len) {
    int left_ind = 0;
    int right_ind = len-1;
    
    while(left_ind <= right_ind){
    int mid = (left_ind + right_ind) /2;
        
        if(number == inputArray[mid]) return mid;
        else if(number < inputArray[mid]) right_ind = mid-1;
        else left_ind = mid+1;
    }
    return -1;

}

int main() {

    int numOfElements = 0;
    int x = -1;
    std::cout << "Enter the number of elements in the array:\n";
    std::cin >> numOfElements;
    std::cout << "Enter the sorted elements of the array:\n";
    for(int i=0; i<numOfElements; ++i){
        std::cin >> inputArray[i];
    }

    std::cout << "Enter the integer to be found in the array:\n";
    std::cin >> x;

    std::cout << "The number is at the index: " << BinarySearch(x, numOfElements) << std::endl;
    return 0;
}