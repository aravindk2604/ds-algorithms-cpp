#include <bits/stdc++.h>

int input[50];

bool BinSearch (int num, int elements) {
    int left = 0;
    int right = elements - 1;

    while(left <= right) {
        int mid = (left + right)/2;
        if(num == input[mid]) return true;
        else if(num < input[mid]) right = mid -1;
        else left = mid +1;
    }
    return false;

}

int main() {
    int numOfElements;
    int number;
    std::cout << "Enter the number of elements in the array:\n";
    std::cin >> numOfElements;

    std::cout << "Enter the elements of the array:\n";
    for(int i=0; i<numOfElements; ++i){
        std::cin >> input[i];
    }

    std::cout << "Enter the num to be found in the array:\n";
    std::cin >> number;

    std::cout << "The number to be checked is: " << number << std::endl;
    bool result = BinSearch(number, numOfElements);
    std::cout << "The number is in the array? " << std::boolalpha << result << std::endl;
    return 0;
}