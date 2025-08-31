#include <iostream>
using namespace std;

//Create Binary Tree using recursion

class node{
    public:
        int data;
        node* left;
        node* right;

    node(int d){
        this->data = d;
        this->left = NULL;
        this->right= NULL;
    }
};

node *growTree(node* root){

    cout<<"Enter data: "<<endl;
    int data;
    cin>>data;
    root = new node(data);


    if(data==-1){
        return NULL;
    }

    cout<<"Enter data for inserting left of "<<data<<endl;
    root->left = growTree(root->left);

    cout<<"Enter data for inserting right of "<<data<<endl;
    root->right = growTree(root->right);   
    
    return root;

}

int main(){

    node* root = NULL;

    root = growTree(root);

    return 0;
}