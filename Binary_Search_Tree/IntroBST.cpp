#include <iostream>
#include <queue>
using namespace std;

struct Node{

    int data;
    Node* left;
    Node* right;

    Node(int d): data(d), left(nullptr), right(nullptr) {}
};

class Solution{
    public:

    Node* InsertInBST(Node* root, int data){

        if(root==NULL){
            root = new Node(data);
            return root;
        } 

        if(data < root->data){
            //left part
            root->left =  InsertInBST(root->left, data);
        }else{
            root->right = InsertInBST(root->right, data);
        }
        return root;
    }

    
    void takeInput(Node* &root){

        int data;
        cin>>data;

        while(data !=-1){
            root = InsertInBST(root, data);
            cin>>data;
        }
    }

    void levelOrderTraversal(Node *root){

    queue<Node*>q;
    q.push(root);

    while(!q.empty()){
        int lvlSize =  q.size();
        for(int i = 0; i<lvlSize; ++i){
            Node* curr = q.front();
            q.pop();

            cout<<curr->data<<" ";
            if(curr->left) q.push(curr->left);
            if(curr->right) q.push(curr->right);
        }
        cout<<'\n';
    }
}

// wirte to code find  Inorder, PostOrder and PreOrder traversal

//  Homework: Write the code to find Inorder successor and Inorder Predseccor.

Node* minValue(Node* root){

    Node* temp = root;

    while(temp->left != NULL){
        temp = temp->left;
    }
    return temp;

}

Node* maxValue(Node* root){
    Node* temp = root;

    while(temp->right != NULL){
        temp = temp->right;
    }
    return temp;
}

Node* deleteFromBST(Node* root, int val){
    //base case
    if(root==NULL) return root;

    if(root->data == val){

        //0 child
        if(root->left == NULL && root->right==NULL){
            delete root;
            return NULL;
        }
        //1 child

            //left child
            if(root->left != NULL && root->right == NULL){
                Node* temp = root->left;
                delete root;
                return temp;
            }

            //right child

            if(root->left == NULL && root->right != NULL){
                Node* temp = root->right;
                delete root;
                return temp;
            }

        //2 child

        if(root->left != NULL && root->right !=NULL){
            int mini = minValue(root->right)->data;
            root->data = mini;
            root->right = deleteFromBST(root->right, mini);
            return root;
        }
        
    }
    else if(root->data > val){
        root->left = deleteFromBST(root->left, val);
    }else{
        root->right = deleteFromBST(root->right, val);
    }
}

};


int main(){

    Node* root = NULL;

    cout<<"Enter data to create BST"<<endl;
    Solution obj;

    obj.takeInput(root);

    cout<<"Printing the BST: "<<endl;

    obj.levelOrderTraversal(root); 
    
    cout<<"Minimum node: " << obj.minValue(root)->data<<endl;
    cout<<"Maximum node: " << obj.maxValue(root)->data;

    // DELETION
    root = obj.deleteFromBST(root, 50);
    cout<<endl;

    cout<<"Printing the BST after Deletion: "<<endl;

    obj.levelOrderTraversal(root); 
    
    cout<<"Minimum node: " << obj.minValue(root)->data<<endl;
    cout<<"Maximum node: " << obj.maxValue(root)->data;

    //TAKE INPUT: 50 20 70 10 30 90 110 -1

    return 0;
}

