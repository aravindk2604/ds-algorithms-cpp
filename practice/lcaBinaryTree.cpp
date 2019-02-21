#include <bits/stdc++.h>

struct Node {
    struct Node *left, *right;
    int key;
};

Node* newNode(int key)
{
    Node* temp = new Node;
    temp->key = key;
    temp->left = temp->right = NULL;
    return temp;
}

struct Node* findLCAUtil(struct Node* root, int n1, int n2, bool& v1, bool& v2) 
{
    // Base case
    if(root == NULL) return NULL;

    if(root->key == n1)
    {
        v1 = true;
        return root;
    }

    if(root->key == n2) {
        v2 = true;
        return root;
    }

    Node* left_lca = findLCAUtil(root->left, n1, n2, v1, v2);
    Node* right_lca = findLCAUtil(root->right, n1, n2, v1, v2);

    if(left_lca && right_lca) return root;

    return (left_lca != NULL) ? left_lca : right_lca;
}

bool find(Node* root, int k) {
    //base case
    if(root == NULL) return false;

    if(root->key == k || find(root->left, k) || find(root->right, k))
        return true;
    
    return false;
}

