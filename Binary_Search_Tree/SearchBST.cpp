#include <iostream>
using namespace std;

template<typename T>
struct node{
    T data;
    node* left;
    node* right;

    node(T d) : data(d), left(nullptr), right(nullptr) {}
};

class Solution{
public: 
    // Search for a value in BST
    bool searchInBST(node<int>* root, int x) {
        // Base case
        if(root == nullptr) 
            return false;

        if(root->data == x) 
            return true;

        if(root->data > x){
            return searchInBST(root->left, x);
        } else {
            return searchInBST(root->right, x);
        }
    }
};

// Example usage and test function
int main() {
    // Create a sample BST
    //       5
    //      / \
    //     3   7
    //    / \   \
    //   2   4   8
    
    node<int>* root = new node<int>(5);
    root->left = new node<int>(3);
    root->right = new node<int>(7);
    root->left->left = new node<int>(2);
    root->left->right = new node<int>(4);
    root->right->right = new node<int>(8);
    
    Solution sol;
    
    // Test cases
    cout << "Search for 4: " << (sol.searchInBST(root, 4) ? "Found" : "Not found") << endl;
    cout << "Search for 7: " << (sol.searchInBST(root, 7) ? "Found" : "Not found") << endl;
    cout << "Search for 1: " << (sol.searchInBST(root, 1) ? "Found" : "Not found") << endl;
    cout << "Search for 8: " << (sol.searchInBST(root, 8) ? "Found" : "Not found") << endl;
    cout << "Search for 10: " << (sol.searchInBST(root, 10) ? "Found" : "Not found") << endl;
    
    // Clean up memory (optional but good practice)
    delete root->left->left;
    delete root->left->right;
    delete root->left;
    delete root->right->right;
    delete root->right;
    delete root;
    
    return 0;
}