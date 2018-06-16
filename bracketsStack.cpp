#include <bits/stdc++.h>

char inputArray[50];
int ind;


void push(char bracket) {
    ++ind;
    inputArray[ind] = bracket;
}

void pop() {
    inputArray[ind] = 0;
    --ind;
}

bool isEmpty() {
    if(ind >= 1) return false;
    else return true;
}

char top() {
    return inputArray[ind];
}

int main() {

    std::cout << "Enter the brackets as a single expression and then press enter when done. \n";
    // std::cin.ignore();
    
    std::cin >> inputArray;
    // char in[50];
    // std::cin >> in;

    for(int i=0; i< strlen(inputArray); i++) {
        if(inputArray[i]== '(' || inputArray[i]== '{' || inputArray[i]== '[') {
            push(inputArray[i]);
            std::cout << "pushed\n"; 
        }

        else if(inputArray[i]== ')') {
            if(!isEmpty()) {
                if(top() == '(') {
                    pop();
                    std::cout << "popped\n";
                }
                else {
                    std::cout << "The expression isn't true\n";
                    return -1;
            }
            }
        }

        else if(inputArray[i]== '}') {
            if(!isEmpty()) {
                if(top() == '{') {
                    pop();
                    std::cout << "popped\n";
                }
                else {
                    std::cout << "The expression isn't true\n";
                    return -1;
            }
            }
        }

        else if(inputArray[i]== ']') {
            if(!isEmpty()) {
                if(top() == '[') {
                    pop();
                    std::cout << "popped\n";
                }
                else {
                    std::cout << "The expression isn't true\n";
                    return -1;
            }
            }
        }

        
    }
    if(isEmpty()) std::cout << "Expression is true\n";
    else std::cout << "The expression isn't true\n";

    return 0;
}