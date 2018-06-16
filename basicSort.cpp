/*
    Basic sorting of an integer array 

*/
int inputArray[50];


#include <bits/stdc++.h>

int main() {
    int numOfElements = 0;

    std::cout << "Enter the number of elements in the array:\n";
    std::cin >> numOfElements;

    std::cout << "Enter the elements of the array:\n";
    for(int k=0; k<numOfElements; ++k)
        std::cin >>inputArray[k];

    for (int i =0; i<numOfElements; i++) {
        for(int j=i+1; j<numOfElements; j++) {
            if(inputArray[i] < inputArray[j])
                std::swap(inputArray[i], inputArray[j]);
        }
    }

    std::cout << "The sorted array in descending order is:\n";
    for(int k=0; k<numOfElements; ++k){
        std::cout << inputArray[k] << " ";
    }

    return 0;
}