#include <bits/stdc++.h>

int QueueArray[50];
int back_ind = -1;
int front_ind = 0;

void push(int number) {
    ++back_ind;
    QueueArray[back_ind] = number;

}

void pop() {
    if(back_ind >= front_ind) {
        QueueArray[front_ind] = 0;
        ++front_ind;
    }
    else 
        std::cerr << "Invalid! Queue is empty" << std::endl; 
}

bool isEmpty() {
    if(back_ind < front_ind) return true;
    else return false;
}

int front() {
    return QueueArray[front_ind];
}

int main(){

    push(10);
    push(-15);
    push(97);
    pop();
    pop();
    std::cout << front() << std::endl;
    pop();
    pop(); // this is where it fails
    
    return 0;
}