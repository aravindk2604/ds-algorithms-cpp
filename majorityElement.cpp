/*
    Find the element that occurs more than or equal to (array_length/2) + 1 times.
    If it does then it is called the majority element. Print it.
    Else print -1

*/

#include <bits/stdc++.h>

int main() {
    int inputArray[] = {0,9,9,4,5,9,6,6,9,9,3,9};
    int occurances = 0;
    int numOfElements = 11; // actually the index of the array and not the number of elements

    std::sort(inputArray+1, inputArray+numOfElements+1);
    int majorityElement = inputArray[(numOfElements/2) +1];
    for(int i=1; i<=numOfElements; ++i) {
        if(majorityElement == inputArray[i])
            ++occurances;
    }

    if(occurances >= (numOfElements/2)+1){
        std::cout << "The majority element is: " << majorityElement << "\n";
    }
    else
        std::cout << -1 << std::endl;
    return 0;
}