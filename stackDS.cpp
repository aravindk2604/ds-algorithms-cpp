#include <bits/stdc++.h>

int stackArray[100];
int ind;

void push (int number) {
    ++ind;
    stackArray[ind] = number;
}

void pop () {

    stackArray[ind] = 0;
    if(ind == 0)
        throw "out of array bounds";    
    
    --ind;
    
}

bool isEmpty() {
    if(ind >= 1) 
        return false;
    else 
        return true;

}

int top() {
    return stackArray[ind];
}


int main() {

    push(20);
    push(33);
    // push(56);
    // push(89);

    if(! isEmpty()) std::cout << top() << "\n"; 
    pop();
    if(! isEmpty()) std::cout << top() << "\n"; 


    pop();

    try{
        pop();
    }
    catch (const char* msg) {
        std::cerr <<  msg << std::endl;
    }
  std::cout << ind << "\n";
    return 0;
}