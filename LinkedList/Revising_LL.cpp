#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}

    ~Node(){
        cout<< "Deleting node" << data <<endl;
    }
};

void insertAtHead(Node* &head, int data){

    Node* temp = new Node(data);

    temp->next=head;
    head = temp;
}

void insertAtTail(Node* &tail, int data){

    Node* temp = new Node(data);

    tail -> next = temp;
    tail= temp;

}

void insertAtPos(Node* &tail, Node* &head, int pos, int data ){

    //insert @ start

    if(pos==1){
        insertAtHead(head, data);
    }

    //insert @ pos p;
    Node* temp = head;
    int cnt = 1;
    while(cnt < pos-1){
        temp=temp->next;
        cnt++;
    }

    Node* nodeToInsert = new Node(data);

    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;

    //Insert @ last
    if(temp->next == nullptr){
        insertAtTail(tail, data);
        return;
    }
}

void deleteNode (Node* &head, int pos){
    
    //deleting first pos
    Node* temp = head; 
    if(pos==1){
        head = head ->next;
        temp->next = nullptr;
        delete temp;
        return;
    }

    // deleting  any postion or last node

    Node* curr = head;
    Node* prev = nullptr;
    int cnt = 1;

    while(cnt<pos){
        prev = curr;
        curr = curr->next;
        cnt++;
    }
    prev->next = curr->next;
    curr->next = nullptr;
    delete curr;
}
Node* reverse(Node* head){
    if(head == nullptr || head->next == nullptr){
        return head;
    }
    Node* prev = nullptr;
    Node* curr = head;
    Node* fwd= nullptr;

    while(curr != nullptr){
        fwd=curr->next;
        curr -> next = prev;
        prev = curr;
        curr = fwd;
    }
    return prev;
}

void print(Node* &head){

    Node* temp = head;

    while(temp){
        cout<<temp -> data << " ";
        temp= temp->next;
    }
    cout << endl;
}

int main(){

    Node* node1 = new Node(2);

    Node* head = node1;
    Node* tail = node1;
    
    head->next = new Node(4);
    tail = head->next;


    insertAtHead(head, 1);
    insertAtTail(tail, 7);

    insertAtPos(tail, head,  3, 5);

    cout<< "Before deleting: " << endl;
    print(head);

    deleteNode(head, 3);

    cout<< "After deleting: " << endl;
    print(head);

    cout<<"Reversed"<<endl;
    head = reverse(head);
    print(head);

    return 0;
}