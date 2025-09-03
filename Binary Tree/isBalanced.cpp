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

    pair<bool,int> fastBalanced(Node* root){
        
        //base case
        if(root==NULL){
            
            pair<bool,int> p = make_pair(true,0);
            return p;
        }
        
        pair<bool,int> left = fastBalanced(root->left);
        pair<bool,int> right = fastBalanced(root->right);
        
        bool leftAns = left.first;
        bool rightAns = right.first;
        
        bool condn  = abs(left.second - right.second)<=1;
        
        pair<bool,int> ans;
        
        ans.second = max(left.second , right.second) + 1;
        
        if(leftAns && rightAns && condn){
            ans.first = true;
        }
        else{
            ans.first = false;
        }
        
        
        return ans;
        
    }
    
    bool isBalanced(Node* root) {
        
        return fastBalanced(root).first;
        
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

int main(){


    Node* node;

    node = growTree(node);


    bool Balance = isBalanced(node);
    if(Balance==true){
            cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

// 12 8 5 -1 -1 11 -1 -1 18 -1 -1
    return 0;
}
