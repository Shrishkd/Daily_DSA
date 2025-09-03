#include <bits/stdc++.h>
using namespace std;

class Node {
  public:

        int data;
        Node* left;
        Node* right;

    Node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
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

    pair<int, int> fastDiameter(Node* root){
        
        //base case
        if(root == NULL){
            
            pair<int, int> p = make_pair(0,0);
            return p;
        }
        
        pair<int, int> left = fastDiameter(root->left);
        pair<int, int> right = fastDiameter(root->right);
        
        int op1 = left.first;
        int op2 = right.first;
        int op3 =  (left.second) + (right.second);
        
        pair<int, int> ans;
        ans.first =  max(op1 , max(op2, op3));
        ans.second =  max(left.second , right.second) + 1;
        
        return ans;
    }
    
    int diameter(Node* root) {
        
        return (fastDiameter(root).first);
        
        
    };

int main(){


    Node* node;

    node = growTree(node);


    int Diameter = diameter(node);
    cout<<"The Diameter of the tree is: "<< Diameter<<endl;

// 12 8 5 -1 -1 11 -1 -1 18 -1 -1
    return 0;
}