#include <bits/stdc++.h>

struct Node {
    int data;
    struct Node* next;
};

// for first node
void initNode(struct Node* head, int n) {
    head->data = n;
    head->next = NULL;
}

// adding a node
void addNode(struct Node* head, int n) {
    Node* newNode = new Node;
    newNode->data = n;
    newNode->next = NULL;

    Node* cur = head;
    while(cur) {
        if(cur->next == NULL) {
            cur->next = newNode;
            return;
        }
        cur = cur->next; 

    }

}

void insertNode(struct Node** head, int n){
    Node* newNode = new Node;
    newNode->data = n;
    newNode->next = *head;
    *head = newNode;
}

bool deleteNode(struct Node** head, Node* ptrDel) {
    Node* cur = *head;
    if(ptrDel == *head) {
        *head = cur->next;
        delete ptrDel;
        return true;
    }

    while(cur) {
        if(cur->next == ptrDel){
            cur->next = ptrDel->next;
            delete ptrDel;
            return true;
        }
        cur = cur->next;
    }
    return false;
}


int main() {

    return 0;
}