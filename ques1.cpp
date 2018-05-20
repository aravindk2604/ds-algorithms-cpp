/*
    Given an input array, add a given integer X to all the elements of the array
    between two bounds - left and right and inclusive of them
*/


#include <bits/stdc++.h>

int inputArray[50];

void add(int right, int left, int x) {
    for(int j=right-1; j<=left-1; j++) {
        inputArray[j] += x;
    }
}


int main() {
    int numOfElements=0;
    std::cout << "Enter the number of elements:\n";
    std::cin >> numOfElements;
    std::cout << "Enter the elements of the input array without a space in between\n";
    for(int i=0; i<numOfElements; ++i) {
        std::cin >> inputArray[i];  
    }

    add(1,5,2);
    add(2,3,10);

    for(int i=0; i<numOfElements; ++i) {
    std::cout << inputArray[i] << " ";
    }
    std::cout << "\n";

    return 0;
}