/*
    The objective is to find the first and/or the last occurance
    of a repeated number in a sorted array. We modify the binary search accordingly

*/

#include <bits/stdc++.h>
int inputArray[50];
int BinarySearch(int number, int len) {
    int left_ind = 0;
    int right_ind = len - 1;
    int result = -1;

    while(left_ind <= right_ind) {
        int mid = (left_ind + right_ind)/2;

        if(number == inputArray[mid]) {
            result = mid;
            // right_ind = mid - 1; // to find first occurance of the num
            left_ind = mid + 1; // to find the last occurance of the num
        }

        else if(number < inputArray[mid]) right_ind = mid - 1;
        else left_ind = mid + 1;
    }
    return result;
}

int main() {

    int numOfElements = 0;
    int check_num = -1;
    std::cout << "Enter the number of elements in the array:\n";
    std::cin >> numOfElements;

    std::cout << "Enter the elements of the sorted array:\n";
    for(int i =0; i<numOfElements; ++i) {
        std::cin >> inputArray[i];
    }

    std::cout << "What number do you want to find in the array?\n";
    std::cin >> check_num;

    // std::cout << "The first occurance of this number is at index: " << BinarySearch(check_num, numOfElements) << "\n";
    std::cout << "The last occurance of this number is at index: " << BinarySearch(check_num, numOfElements) << "\n";
    
    return 0;
}