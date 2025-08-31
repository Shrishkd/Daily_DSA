#include <iostream>
#include <queue>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node (int d){
        this->data= d;
        this->left=NULL;
        this->right=NULL;
    }
};

// Create Binary tree first. 

node *createBinTree(node *root){

    cout<<"Enter data: "<<endl;
    int data;
    cin>>data;
    root = new node(data);

    if(data== -1){
        return NULL;
    }

    cout<<"Enter data in the left of "<<data<<endl;
    root->left = createBinTree(root->left);

    cout<<"Enter data in the right of "<<data<<endl;
    root->right= createBinTree(root->right);

    return root;
};


//Level Order Traversal

void levelOrderTraversal(node *root){

    queue<node*>q;
    q.push(root);

    while(!q.empty()){
        int lvlSize =  q.size();
        for(int i = 0; i<lvlSize; ++i){
            node* curr = q.front();
            q.pop();

            cout<<curr->data<<" ";
            if(curr->left) q.push(curr->left);
            if(curr->right) q.push(curr->right);
        }
        cout<<'\n';
    }
}


//InOrder (LNR)
void Inorder(node *root){
    
    //base case
    if(root==NULL){
        return;
    }

    Inorder(root->left);
    cout<< root->data<<" ";
    Inorder(root->right);
}
//PreOrder  (NLR)
void PreOrder(node *root){
    //base case
    if(root==NULL){
        return;
    }
    cout<< root->data<<" ";
    PreOrder(root->left);
    PreOrder(root->right);
}

//PostOrder (LRN)
void PostOrder(node *root){
    //base case
    if(root == NULL){
        return;
    }

    PostOrder(root->left);
    PostOrder(root->right);
    cout<<root->data<<" ";
}

int main(){

    node* root = NULL;

    root = createBinTree(root);

    //1 3 7 -1 -1 9 -1 -1 5 11 -1 -1 -1

    cout<<"Level Order Traversal"<<endl;
    levelOrderTraversal(root);
    cout<<endl;

    cout<<"Inorder Traversal: "<<endl;
    Inorder(root);
    cout<<endl;

    cout<<"PreOrder Traversal: "<<endl;
    PreOrder(root);
    cout<<endl;

    cout<<"Postorder Traversal: "<<endl;
    PostOrder(root);
    cout<<endl;

    return 0;

}
