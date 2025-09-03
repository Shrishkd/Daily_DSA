#include <iostream>
using namespace std;

//Create Binary Tree using recursion

class Node{
    public:
        int data;
        Node* left;
        Node* right;

    Node(int d){
        this->data = d;
        this->left = NULL;
        this->right= NULL;
    }
};

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

int height(Node* node){

    //base case
    if(node == NULL){
        return 0;
    }

    int left = height(node->left);
    int right = height(node->right);

    int ans = max(left, right) + 1;

    return ans;

}

int main(){

    Node* root = NULL;
    root = growTree(root);

    int treeHeight = height(root);
    cout<<"Height of tree: "<<treeHeight<<endl;


    // 12 8 5 -1 -1 11 -1 -1 18 -1 -1

    return 0;
}