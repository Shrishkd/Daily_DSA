// 112. Path Sum (Leet Code)
/*
Given the root of a binary tree and an integer targetSum, return true if the tree has a root-to-leaf path such that adding up all the values along the path equals targetSum.

A leaf is a node with no children.
*/

#include <bits/stdc++.h>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// Solution class
class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root == NULL) return false;

        // If it's a leaf node
        if(root->left == NULL && root->right == NULL) {
            return targetSum == root->val;
        }

        // Check left or right subtree with reduced targetSum
        return hasPathSum(root->left, targetSum - root->val) ||
               hasPathSum(root->right, targetSum - root->val);
    }
};

// Helper function to build the sample tree
TreeNode* buildSampleTree() {
    /*
           5
          / \
         4   8
        /   / \
       11  13  4
      /  \      \
     7    2      1
    */
    TreeNode* root = new TreeNode(5);
    root->left = new TreeNode(4);
    root->right = new TreeNode(8);
    root->left->left = new TreeNode(11);
    root->left->left->left = new TreeNode(7);
    root->left->left->right = new TreeNode(2);
    root->right->left = new TreeNode(13);
    root->right->right = new TreeNode(4);
    root->right->right->right = new TreeNode(1);

    return root;
}

int main() {
    Solution sol;
    TreeNode* root = buildSampleTree();

    int targetSum = 22;

    if(sol.hasPathSum(root, targetSum)) {
        cout << "Path with sum " << targetSum << " exists!" << endl;
    } else {
        cout << "No path with sum " << targetSum << " found." << endl;
    }

    return 0;
}
