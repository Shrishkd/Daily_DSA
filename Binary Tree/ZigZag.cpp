#include <iostream>
#include <queue>
using namespace std;

struct Node{

    int data;
    Node* left;
    Node* right;

    Node(int d) : data(d) , left(nullptr), right(nullptr) {}
};

class Solution{
    public:
    //Function to store the zig zag order traversal of tree in a list.
    vector <int> zigZagTraversal(Node* root)
    {
    	vector<int> result;
    	if(root == NULL)
    	    return result;
    	
    	queue<Node*> q;
    	q.push(root);
    	
    	bool leftToRight = true;
    	
    	while(!q.empty()) {  // To traverse vertically (upside down); level by level.
    	    
    	    int size = q.size();
    	    vector<int> ans(size);
    	    
    	    //Level Process
    	    for(int i=0; i<size; i++) { //To traverse horizontally (left to right OR right to left);in each level
    	        
    	        Node* frontNode = q.front();
    	        q.pop();
    	        
    	        //normal insert or reverse insert 
    	        int index = leftToRight ? i : size - i - 1; 
                /*
                int index; 

                if(leftToRight){

                 index = i; 

                 }else

                 { index= size - i - 1; 
                  }
                */
    	        ans[index] = frontNode -> data;
    	        
    	        if(frontNode->left)
    	            q.push(frontNode -> left);
    	            
    	        if(frontNode->right)
    	            q.push(frontNode -> right);
    	    }
    	    
    	    //direction change karni h
    	    leftToRight = !leftToRight;
    	   
    	  for(auto i: ans) { 
    	      result.push_back(i);
    	  }  

          /*
          for(int j=0; j<ans.size(); j++)
          { result.push_back(ans[j]);
        }
          */
    	}
    	    return result;
    }
};

Node *growTree(Node* root){

    cout<<"Enter data: "<<endl;
    int data;
    cin>>data;

    if(data==-1){
        return NULL;
    }
    
    root =  new Node(data);

    cout<<"Enter data in the left of: "<<data<<endl;
    root->left =  growTree(root->left);

    cout<<"Enter data in the right of: "<<data<<endl;
    root->right = growTree(root->right);

    return root;
};

int main(){

    Node* root = NULL;

    root = growTree(root);

    Solution obj;

    vector<int> result = obj.zigZagTraversal(root);

    // Display the result
    cout << "Zig-Zag Traversal: ";
    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;


    return 0;
}