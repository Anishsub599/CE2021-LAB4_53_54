#ifndef LINKEDBST_H
#define LINKEDBST_H

#include "bst.h"
#include <iostream>

struct Node {
    int data;
    Node* left;
    Node* right;
};

class LinkedBST : public bst {
public:
    LinkedBST();
    ~LinkedBST();

    bool isEmpty();
    void addBST(int);
    void removeBST(int);
    bool searchBST(int);
    void inorder();
    void max(int&);
    void min(int&);

private:
    Node* root;
    Node* add(Node* root, int data);
    void inorder(Node* node);
    Node* getNewNode(int data);
    Node* remove(Node* root, int data);
    Node* findMin(Node* root);
    bool search(Node* root, int data);
};

#endif
