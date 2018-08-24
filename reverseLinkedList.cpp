#include <bits/stdc++.h>

struct Node {
    int data;
    struct Node* next;
};

class LL {
    Node* head;
    Node* tail;

    public: 

    int numOfNodes;

    LL() {
        head = nullptr;
        tail = nullptr;
        numOfNodes = 0;
    }
    void createNode(int value);

    void addNode_start(int value);
    void addNode_end(int value);
    void addNode_pos(int pos, int value);

    void deleteNode(int pos);
    void deleteNode_start();
    void deleteNode_end();

    void printList();
    void reversePrint();
};


void LL::createNode(int value) {
    Node* temp = new Node;
    temp->data = value;
    temp->next = nullptr;
    
    if(head == nullptr) {  // list is empty; head = tail
        head = temp;
        tail = temp;
        temp = nullptr;
    }

    else { // list not empty; head present and maybe = tail; so append the new node
        tail->next = temp;
        tail = temp;
    }
    
    temp = nullptr;
    LL::numOfNodes += 1;

}

void LL::printList() {
    if(head == nullptr)
        std::cerr << "List is empty." << std::endl;
    
    else {
        Node* itr = head;
        while(itr != nullptr) {
            std::cout << itr->data << " ";
            itr = itr->next;
        }
        std::cout << "\n";
        delete itr;
    }
}


void LL::addNode_start(int value) {
    Node* temp = new Node;
    temp->data = value;
    temp->next = head;
    head = temp;
    LL::numOfNodes += 1;
}

void LL::addNode_end(int value) {
    Node* temp = new Node;
    temp->data = value;
    temp->next = nullptr;
    tail->next = temp;
    tail = temp;
    LL::numOfNodes += 1;

}

void LL::addNode_pos(int pos, int value) {
    Node* temp = new Node;
    Node* curr = new Node;
    Node* prev = new Node;

    curr = head;
    temp->data = value;
    for(int i=1; i<pos; ++i) {
        prev = curr;
        curr = curr->next;
    }
    prev->next = temp;
    temp->next = curr;
    LL::numOfNodes += 1;
}

void LL::deleteNode_start() {
    Node* temp = new Node;
    temp = head;
    head = head->next;
    delete temp;

    LL::numOfNodes -= 1;
}

void LL::deleteNode_end(){
    // Node* temp = new Node;
    Node* curr = new Node;
    Node* prev = new Node;

    curr = head;
    while(curr->next != nullptr) {
        prev = curr;
        curr = curr->next;
    }
    tail = prev;
    tail->next = nullptr;
    curr = nullptr;
    prev = nullptr;
    delete curr;
    delete prev;

    LL::numOfNodes -= 1;
}


void LL::deleteNode(int pos) {
    Node* prev = new Node;
    Node* curr = new Node;

    curr = head;
    for(int i=1; i<pos; ++i) {
        prev = curr;
        curr = curr->next;
    }

    prev->next = curr->next;
    curr = nullptr;
    delete curr;

    numOfNodes -= 1;
}

void LL::reversePrint(){
    std::vector<int> d; 
    Node* itr = new Node;
    itr = head;
    while(itr != nullptr) {
        d.push_back(itr->data);
        itr = itr->next;
    }

    delete itr;
    std::cout << "The list in the reverse order is: \n";
    for(auto it = d.rbegin(); it!= d.rend(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << "\n";
}


int main() {
    LL obj;
    obj.createNode(10);
    obj.createNode(11);
    obj.createNode(12);

    obj.printList();

    obj.addNode_start(2);
    obj.printList();

    obj.addNode_end(89);
    obj.printList();

    obj.addNode_pos(3, 77);
    obj.printList();
    std::cout << "Number of nodes in the list is: " << obj.numOfNodes << "\n";

    obj.deleteNode_end();
    obj.printList();

    obj.deleteNode_start();
    obj.printList();

    obj.deleteNode(2);
    obj.printList();

    obj.reversePrint();

    return 0;
}