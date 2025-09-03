#include <iostream>
using namespace std;

class Node{
    public:

    int data;
    Node* left;
    Node* right;

    Node(int d){
        this->data=d;
        this->left = NULL;
        this->right = NULL;
    }
};

    bool isIdentical(Node* root1, Node* root2) {
        //  base cases
        if(root1==NULL &&  root2==NULL){
            return true;
        }
        if(root1==NULL && root2!=NULL){
            return false;
        }
        if(root1!=NULL && root2==NULL){
            return false;
        }
        
        bool left = isIdentical(root1->left, root2->left);
        bool right = isIdentical(root1->right, root2->right);
        
        bool val = (root1->data == root2->data);
        
        if(left && right && val){
            return true;
        }else{
            return false;
        }
        
    }

    Node* growTree(Node* root){
    // base case
    if(root == NULL){
        cout << "Enter Data: " << endl;
        int data;
        cin >> data;
        
        if(data == -1) { // Using -1 to indicate NULL node
            return NULL;
        }
        
        root = new Node(data);
        
        cout << "Enter data for left of " << data << " (enter -1 for NULL): " << endl;
        root->left = growTree(root->left);
        
        cout << "Enter data for right of " << data << " (enter -1 for NULL): " << endl;
        root->right = growTree(root->right);
    }
    return root;
    }

  int main() {
    Node* root1 = NULL;
    Node* root2 = NULL;
    
    cout << "Building first tree (enter -1 for NULL nodes):" << endl;
    root1 = growTree(root1);
    
    cout << "\nBuilding second tree (enter -1 for NULL nodes):" << endl;
    root2 = growTree(root2);
    
    if(isIdentical(root1, root2)) {
        cout << "\nThe two trees are identical." << endl;
    } else {
        cout << "\nThe two trees are NOT identical." << endl;
    }
    
    return 0;
}