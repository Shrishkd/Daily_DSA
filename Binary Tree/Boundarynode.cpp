#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int d) : data(d), left(nullptr), right(nullptr) {} 
};

class Solution {
  public:
    void traverseLeft(Node *root, vector <int> &ans){
        
        //base case
        if((root==NULL) || (root->left == NULL && root->right == NULL)) return;
        
        ans.push_back(root->data);
        
        if(root->left){
            traverseLeft(root->left , ans);
        }
        else{
            traverseLeft(root->right, ans);
        }
        
    }
    
    void traverseLeaf(Node* root, vector<int> &ans){
        
        //base case
        if(root == NULL) return;
        
        if(root->left == NULL && root->right==NULL){
            ans.push_back(root->data);
            return;
        }
        
        traverseLeaf(root->left, ans);
        traverseLeaf(root->right, ans);
    }
    
    void traverseRight(Node* root, vector<int> &ans){
        
        //base case
        if((root == NULL) || (root->left == NULL && root->right == NULL)) return;
        
        if(root->right) {
            traverseRight(root->right, ans);
        }else{
            traverseRight(root->left, ans);
        }
        
        ans.push_back(root->data);
    }
    vector<int> boundaryTraversal(Node *root) {
        
        vector <int> ans;
        if(root==NULL) return ans;
        
        ans.push_back(root->data);
        
        //left part
        traverseLeft(root->left, ans);
        
        //left subtree
        traverseLeaf(root->left, ans);
        
        //right subtree
        traverseLeaf(root->right, ans);
        
        
        //right part
        traverseRight(root->right, ans);
        
        return ans;
        
    }
};

// Helper Function
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

int main(){

    Node* root = NULL;
    // Build the binary tree
    root = growTree(root);
    
    // Create Solution object
    Solution sol;
    
    // Perform boundary traversal
    vector<int> result = sol.boundaryTraversal(root);
    
    // Display the result
    cout << "Boundary Traversal: ";
    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    
    return 0;

}
