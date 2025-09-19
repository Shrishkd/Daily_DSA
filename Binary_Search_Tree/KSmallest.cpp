#include <iostream>
using namespace std;

template <typename T>
class BinaryTreeNode {
public:
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;
    
    BinaryTreeNode(T data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

// Solution 1: Using reference parameter for count
int solve(BinaryTreeNode<int>* root, int &count, int k) {
    // Base case
    if (root == NULL) return -1;
    
    // Search in left subtree
    int left = solve(root->left, count, k);
    if (left != -1) return left;
    
    // Process current node
    count++;
    if (count == k) {
        return root->data;
    }
    
    // Search in right subtree
    return solve(root->right, count, k);
}

int kthSmallest(BinaryTreeNode<int>* root, int k) {
    int count = 0;
    return solve(root, count, k);
}

// Alternative Solution 2: Without reference parameter
int kthSmallestAlternative(BinaryTreeNode<int>* root, int k, int &count) {
    if (root == NULL) return -1;
    
    // Check left subtree
    int left = kthSmallestAlternative(root->left, k, count);
    if (left != -1) return left;
    
    // Process current node
    count++;
    if (count == k) return root->data;
    
    // Check right subtree
    return kthSmallestAlternative(root->right, k, count);
}

int kthSmallestAlternative(BinaryTreeNode<int>* root, int k) {
    int count = 0;
    return kthSmallestAlternative(root, k, count);
}

// Helper function to create a sample BST
BinaryTreeNode<int>* createSampleBST() {
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(5);
    root->left = new BinaryTreeNode<int>(3);
    root->right = new BinaryTreeNode<int>(7);
    root->left->left = new BinaryTreeNode<int>(2);
    root->left->right = new BinaryTreeNode<int>(4);
    root->right->left = new BinaryTreeNode<int>(6);
    root->right->right = new BinaryTreeNode<int>(8);
    return root;
}

// Test function
int main() {
    BinaryTreeNode<int>* root = createSampleBST();
    
    // Test cases
    cout << "1st smallest: " << kthSmallest(root, 1) << endl;  // Should be 2
    cout << "3rd smallest: " << kthSmallest(root, 3) << endl;  // Should be 4
    cout << "5th smallest: " << kthSmallest(root, 5) << endl;  // Should be 6
    
    // Test alternative solution
    cout << "Alternative solution:" << endl;
    cout << "1st smallest: " << kthSmallestAlternative(root, 1) << endl;
    cout << "3rd smallest: " << kthSmallestAlternative(root, 3) << endl;
    
    return 0;
}