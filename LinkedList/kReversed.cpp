#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;
    Node* prev;

    //Constructor
    Node(int d){
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    }
};   
    Node* kReverse(Node* head, int k){
        //Base Code
            if(head==NULL){
                return NULL;
            }

            // If number is of element is not in multiple of k, for ex. 1 2 3 4 5 and k = 3 , it reverse  3 2 1 but  4 5 (2 element is less than 3); 
            // then it will leave 4 5  as it is ; if we remove this condition then it will be 3 2 1 5 4

            /* Node* temp = head;
            int count = 0;

            while(temp!=NULL && count<k){
                temp= temp->next;
                count++;
            }

            if(count<k){
                return head;
            } */

            //Reverse first Node;
            Node* next = NULL;
            Node* curr = head;
            Node* prev = NULL;
            int  cnt = 0;

            while(curr!= NULL && cnt<k){
                next = curr -> next;
                curr->next = prev;
                prev = curr;
                curr = next;
                cnt++;
            }

            if( next!=NULL){
                head->next =  kReverse(next,k);
            }

            return prev;
    }


void insertAtTail(Node* &tail, int d){

    Node* temp = new Node(d);
    tail->next = temp;
    tail = tail->next;
}

void Print(Node* head){

    Node* temp = head;

    if(temp==NULL){
        cout<<"List is Empty";
    }
    else{
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp= temp->next;
        }
        cout<<endl;
    }
}

 
 
int main() {

    Node* node1 = new Node(10);

    Node* head = node1;
    Node* tail = node1;


    insertAtTail(tail, 30);
    insertAtTail(tail, 45);
    insertAtTail(tail, 55);
    insertAtTail(tail, 60);
    // insertAtTail(tail, 75);
    Print(head);

    head = kReverse(head, 3);
    Print(head);

    
 
return 0;
}