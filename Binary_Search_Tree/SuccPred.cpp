#include <iostream>
#include <climits>
using namespace std;

template <typename T>
class TreeNode {
public:
    T data;
    TreeNode<T> *left;
    TreeNode<T> *right;
    
    TreeNode(T data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

pair<int, int> predecessorSuccessor(TreeNode<int> *root, int key) {
    if (root == nullptr) {
        return {-1, -1};
    }
    
    TreeNode<int>* temp = root;
    int pred = -1;
    int succ = -1;
    
    // Find the node with the given key
    while (temp != nullptr && temp->data != key) {
        if (temp->data > key) {
            succ = temp->data;  // Potential successor
            temp = temp->left;
        } else {
            pred = temp->data;  // Potential predecessor
            temp = temp->right;
        }
    }
    
    if (temp == nullptr) {
        // Key not found
        return {-1, -1};
    }
    
    // Find predecessor (max value in left subtree)
    if (temp->left != nullptr) {
        TreeNode<int>* leftTree = temp->left;
        while (leftTree->right != nullptr) {
            leftTree = leftTree->right;
        }
        pred = leftTree->data;
    }
    
    // Find successor (min value in right subtree)
    if (temp->right != nullptr) {
        TreeNode<int>* rightTree = temp->right;
        while (rightTree->left != nullptr) {
            rightTree = rightTree->left;
        }
        succ = rightTree->data;
    }
    
    return {pred, succ};
}