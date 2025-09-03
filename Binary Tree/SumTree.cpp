// SUM TREE

// Given a Binary Tree. Check for the Sum Tree for every node except the leaf node. Return true if it is a Sum Tree otherwise, return false.

// A SumTree is a Binary Tree where the value of a node is equal to the sum of the nodes present in its left subtree and right subtree. An empty tree is also a Sum Tree as the sum of an empty tree can be considered to be 0. A leaf node is also considered a Sum Tree.

// Examples:

// Input:
//     3
//   /   \    
//  1     2
// Output: true
// Explanation: The sum of left subtree and right subtree is 1 + 2 = 3, which is the value of the root node. Therefore,the given binary tree is a sum tree.


#include <iostream>
using namespace std;

struct Node{
    
    int data;
    Node* left;
    Node* right;

    Node(int d) : data(d) ,left(nullptr) , right(nullptr) {}

};

class Solution {
  public:
  
    pair<bool,int> isSumTreeFast(Node* root){
        if(root == NULL){
            pair<bool,int> p = make_pair (true,0);
            return p;
        }
        
        if(root->left == NULL && root->right== NULL){
            pair<bool, int> p = make_pair (true, root->data);
            return p;
        }
        
        pair<bool,int> left = isSumTreeFast(root->left);
        pair<bool,int> right = isSumTreeFast(root->right);
        
        
        bool isLeftSumTree = left.first;
        bool isRightSumTree = right.first;
        
        int leftSum = left.second;
        int rightSum = right.second;
            
        bool condn = root->data == leftSum + rightSum;
        
        pair<bool,int> ans;
        
        
        if(isLeftSumTree && isRightSumTree && condn){
            ans.first = true;
            ans.second = 2 * root->data;
        }else{
            ans.first = false;
        }
        
        return ans;
    }

    bool isSumTree(Node* root) {
        
        return isSumTreeFast(root).first;
    }  
    
    
    Node *growTree(Node* root){

    cout<<"Enter data: "<<endl;
    int data;
    cin>>data;

    if(data==-1){
        return NULL;
    }

    root = new Node(data);

    cout<<"Enter data for inserting left of "<<data<<endl;
    root->left = growTree(root->left);

    cout<<"Enter data for inserting right of "<<data<<endl;
    root->right = growTree(root->right);   
    
    return root;

}
};
int main() {
    Solution sol;
    Node* root = nullptr;
    
    cout << "Build the binary tree (enter -1 for NULL nodes):" << endl;
    root = sol.growTree(root);
    
    bool result = sol.isSumTree(root);
    
    if(result) {
        cout << "\nThe given binary tree is a Sum Tree." << endl;
    } else {
        cout << "\nThe given binary tree is NOT a Sum Tree." << endl;
    }
    
    return 0;
}