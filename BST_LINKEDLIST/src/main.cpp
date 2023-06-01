#include<iostream>
#include "linkedBST.h"
#include "bst.h"
using namespace std;

int main() {
    LinkedBST tree;
    tree.addBST(5);
    tree.addBST(4);
    tree.addBST(9);
    tree.addBST(2);
    tree.addBST(6);
    tree.addBST(7);
    tree.addBST(1);

    cout << "Inorder Traversal:" << endl;
    tree.inorder();

    int value;
    cout << "Enter a value to search: ";
    cin >> value;
    if (tree.searchBST(value)) {
        cout << "Value found!" << endl;
    }
    else {
        cout << "Value not found!" << endl;
    }

    int minValue, maxValue;
    tree.min(minValue);
    tree.max(maxValue);
    cout << "The minimum value is: " << minValue << endl;
    cout << "The maximum value is: " << maxValue << endl;

    int removeValue;
    cout << "Enter a value to remove: ";
    cin >> removeValue;
    tree.removeBST(removeValue);
    cout << "Inorder Traversal after removal:" << endl;
    tree.inorder();

    return 0;
}
