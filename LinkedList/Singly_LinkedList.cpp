#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //Constructor
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }

    //Destructor
    ~Node() {
        int value = this-> data;

        //memory free
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"Memory is free for node with data: " << value <<endl;
    }

};

    void insertAtHead(Node* &head, int d){

        //new node created
        Node* temp = new Node(d);
        temp -> next = head;
        head = temp;
    }

    void insertAtTail(Node* &tail, int d){
        // new node created
        Node* temp = new Node(d);
        tail -> next = temp;
        tail = tail -> next; 
    }

    void insertAtPosition(Node* &tail, Node* &head, int position, int d){

        //insert at starting
        if(position == 1){
            insertAtHead(head, d);
            return;
        }

        Node* temp = head;
        int cnt;

        while(cnt < position-1){
            temp = temp->next;
            cnt++;
        }

        //insertion at last 

        if(temp -> next == NULL){
            insertAtTail(tail, d);
            return;
        }

        //Creating  a node for d
        Node* nodeToinsert = new Node(d);
        
        nodeToinsert -> next = temp-> next;
        temp -> next = nodeToinsert;

    }

    void deleteNode(int position, Node* &head){
        
        //Deleting first/ Start Node
        if(position==1){
            Node* temp = head;
            head = head->next;
            //memory free start node
            temp->next = NULL;
            delete temp;
        }
        else{
            // Delete any middle node or last node

            Node* curr = head;
            Node* prev = NULL;

            int cnt =1;
            while(cnt < position){
                prev =curr;
                curr = curr -> next;
                cnt++;
            }

            prev -> next = curr -> next;
            curr -> next = NULL;
            delete curr;
        }
    }

    void print(Node* &head){
        Node* temp = head;

        while(temp !=  NULL){
            cout<< temp -> data << " ";
            temp = temp -> next;
        }
        cout<< endl;
    }

    bool isCircular(Node* head){

        if(head==NULL){
            return true;
        }

        Node* temp = head->next;

        while(temp != NULL && temp!=head){
            temp= temp->next;
        }

        if(temp == head){
            return true;
        }

        return false;
    }

int main(){

    //Created a new node
    Node* node1 = new Node(10);

    // cout<< node1 -> data <<endl;
    // cout<< node1 -> next << endl;

    // Head pointed to  node1;
    Node* head = node1;
    Node* tail = node1;

    print(head);

    insertAtHead(head, 12);
    print(head);

    insertAtTail(tail, 30);
    print(head);
    
    insertAtPosition(tail, head, 3, 22);
    print(head);

    cout<<"Head: " << head-> data<<endl;
    cout<<"Tail: " << tail-> data<<endl;

    // deleteNode(4, head);
    // print(head);

    if(isCircular(tail)){
        cout<<"List is Circular";
    }
    else{
        cout<<"List is not circular";
    }
    return 0;
}