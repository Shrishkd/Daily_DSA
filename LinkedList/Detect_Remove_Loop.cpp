#include <iostream>
#include <map>
using namespace std;

struct Node {

    int data;
    Node* next;
    Node* prev;

    Node(int d){
        this->data = d;
        this->next = NULL;
        this->next = NULL;
    }
};

    void insertAtTail(Node* &tail, int d){
        // new node created
        Node* temp = new Node(d);
        tail -> next = temp;
        tail = tail -> next; 
    }

    void print(Node* &head){
        Node* temp = head;

        while(temp !=  NULL){
            cout<< temp -> data << " ";
            temp = temp -> next;
        }
        cout<< endl;
    }


//APPROACH 1
bool detectLoop(Node* head){

    if(head==NULL){
        return false;
    }

    map<Node* , bool> visited;

    Node* temp = head;

    while(temp!=NULL){

        if(visited[temp] == true){
            cout<<"Cycle is present on element: "<<temp->data <<endl;
            return true;
        }

        visited[temp] = true;
        temp = temp->next;
    }

    return false;
}

//Approach 2
Node* flyodDetectLoop (Node* head){

    if(head==NULL){
        return NULL;
    }

    Node* slow = head;
    Node* fast = head;

    while(slow != NULL && fast!=NULL){
        
        fast = fast->next;
        if(fast!=NULL){
            fast = fast->next;
        }
        slow = slow->next;

        if(slow==fast){
            return slow;
        }
    }
    return NULL;
}


Node* getStartNode(Node* head){

    if(head == NULL){
        return NULL;
    }

    Node* intersect = flyodDetectLoop(head);

    Node* slow= head;

    while(slow != intersect){
        slow = slow->next;
        intersect= intersect->next;
    }

    return slow;

};

void removeLoop(Node* head){

    if(head == NULL){
        return;
    }

    Node* startNode = getStartNode(head);
    Node* temp = startNode;

    while(temp->next != startNode){
        temp=temp->next;
    }
    temp->next=NULL;
}


int main(){

    Node* node1 = new Node(10);

    Node* head = node1; 
    Node* tail = node1;

    insertAtTail(tail, 15);
    insertAtTail(tail, 25);
    insertAtTail(tail, 35);
    insertAtTail(tail, 45);
    insertAtTail(tail, 55);

    print(head);

    tail->next = head->next->next->next;

    if(detectLoop(head)){
        cout<<"Using Mapping, Cycle is Present " <<endl;
    }
    else{
        cout<<"Using Mapping, No Cycle"<<endl;
    }

        cout<<endl;

    if(flyodDetectLoop(head)!=NULL){
        cout<<"Using Floyd, Cycle is Present " <<endl;
    }
    else{
        cout<<"Using Floyd, No Cycle"<<endl;
    }

    cout<<endl;

    Node* loopPoint = getStartNode(head);
    cout<<"Loop starting point: "<< loopPoint->data<<endl;

    removeLoop(head);
        if(flyodDetectLoop(head)!=NULL){
        cout<<"Using Floyd, Cycle is Present " <<endl;
    }
    else{
        cout<<"Using Floyd, No Cycle"<<endl;
    }

    return 0;
}