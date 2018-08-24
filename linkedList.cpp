#include <bits/stdc++.h>
// singly linked-list example


struct Node {
    int data;
    struct Node* next;
};

class LinkedList {
    Node* head;
    Node* tail;

    public:
    LinkedList() { 
        head = nullptr; 
        tail = nullptr; 
    }

    // create a node
    void createNode(int value) {
        // check if head is null? then head = new node
        // else link the next Node* of current tail to tempNode
        // and make the tempNode as the new tail.

        Node* tempNode = new Node;
        tempNode->data = value;
        tempNode->next = nullptr;

        if(head == nullptr) {
            head = tempNode;
            tail = tempNode;
            tempNode = nullptr;
        }

        else {
            tail->next = tempNode;
            tail = tempNode;
        }

        tempNode = nullptr;
    }

    // display the linked list

    void display() {
        Node* itr = head;
        if(itr == nullptr) std::cout << "Linked List is empty. \n";
        else {
        while(itr != nullptr) {
            std::cout << itr->data << "\t";
            itr = itr->next;
        }
        // std::cout << itr->data << "\n";
        std::cout << "\n";

        }
    }

    // insert a node at the start
    void addNodeStart (int value) {
        Node* tempNode = new Node;

        tempNode->next = head->next;
        head->next = tempNode;
        tempNode->data = head->data;
        head->data = value;
    }

    // insert a node at the end

    void addNodeEnd(int value) {
        Node* tempNode = new Node;

        tempNode->data = value;
        tempNode->next = nullptr;
        tail->next = tempNode;

    }

    // insert a node at particular position

    void insertNode(int pos, int value) {
        Node* prev = new Node;
        Node* curr = new Node;
        Node* tempNode = new Node;
        
        curr = head;
        for(int i=1; i<pos; ++i){
            prev = curr;
            curr = curr->next; 
        }    

        tempNode->data = value;
        prev->next = tempNode;
        tempNode->next = curr;

    }

    // deleting a node at the start

    void deleteNodeStart () {
        Node* tempNode = new Node;
        tempNode = head;
        head = head->next;
        delete tempNode;
    }

    // deleting a node at the end

    void deleteNodeEnd() {
        Node* prev = new Node;
        Node* curr = new Node;
        // Node* tempNode = new Node;
        curr = head;
        while(curr->next != nullptr) {
            prev = curr;
            curr = curr->next;
        }
        tail = prev;
        tail->next = nullptr;

        // std::cout << prev->data << "\n";
        curr = nullptr;
        prev = nullptr;
        delete curr;
        delete prev;
        // delete tempNode

    }

    // deleting a node from a particular position

    void deleteNode(int pos) {
        // Node* tempNode = new Node;
        Node* curr = new Node;
        Node* prev = new Node;

        curr = head;
        for(int i=1; i<pos; ++i){
            prev = curr;
            curr = curr->next;
        }

        if(curr->next != nullptr) {
            prev->next = curr->next;
        }
        else 
            std::cerr << "Cannot delete last element. Use deleteNodeEnd() method.\n";
        
        curr = nullptr;
        delete curr;

    }


};


int main() {

    LinkedList obj;
    obj.createNode(35);
    obj.createNode(44);
    obj.createNode(96);

    obj.display();

    obj.addNodeEnd(19);
    obj.insertNode(3, 88);
    obj.display();

    obj.deleteNodeStart();
    // obj.deleteNodeStart();
    obj.deleteNode(3);

    obj.display();

    // obj.deleteNodeEnd();

    // obj.display();

    return 0;
}
