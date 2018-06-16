#include <bits/stdc++.h>

int input[50] = {2, 9, 56, 10, 15, 35, 18, 698};

bool binSearch(int number, int len) {
    int left = 0;
    int right = len - 1;

    while(left <= right) {
        int mid = (left+right)/2;

        if(number == input[mid]) return true;
        else if(number < input[mid]) right = mid -1;
        else left = mid + 1;
    }
    return false;
}

int main() {    

    std::cout << "Is the number in the array? " << (bool)binSearch(2, 8) << "\n";

    return 0;
}