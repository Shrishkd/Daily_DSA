#include<bits/stdc++.h>
using namespace std;
 

struct Node{

    int data;
    Node* prev;
    Node* next;

    Node(int val) : data(val), prev(nullptr), next(nullptr) {}

    
};
    // APPROACH 1
    // Node* ReverseLinkedList(Node* &head){
    //     if(head==NULL || head->next == NULL){
    //         return head;
    //     }

    //     Node* prev = NULL;
    //     Node* curr = head;
    //     Node* forward = NULL;

    //     while(curr!=NULL){
    //         forward = curr->next;
    //         curr->next = prev;
    //         curr->last = forward;
            
    //         prev = curr;
    //         curr= forward;
    //     }

    //     head = prev;

    //     return head;
    // }

    // APPROACH 2: RECURSION

    Node* reverseDLL(Node* head) {
    if (head == NULL || head->next == NULL)
        return head;

    Node* newHead = reverseDLL(head->next);

    head->next->next = head;
    head->prev = head->next;
    head->next = NULL;
    
    newHead->prev = NULL; 
    return newHead;
}
Node* CreateSampleDoublyList() {
    // Create nodes
    Node* head = new Node(3);
    Node* second = new Node(5);
    Node* third = new Node(7);
    Node* fourth = new Node(9);
    
    // Link nodes forward
    head->next = second;
    second->next = third;
    third->next = fourth;
    
    // Link nodes backward
    fourth->prev = third;
    third->prev = second;
    second->prev = head;
    
    return head;
};
    void printForward(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<< temp -> data << " ";
        temp = temp -> next;
    }
    cout<< endl;
    }

    void printBackwar(Node* tail){

        Node* temp =tail;
        while(temp != NULL){
            cout<< temp->data<< " ";
            temp = temp -> prev;
        }
        cout<< endl;
    }
 
int main() {
 
    Node* head = CreateSampleDoublyList();

    cout<<"Original List: ";

    printForward(head);
    cout<<endl;
    // printBackwar(tail);

    head = reverseDLL(head);

    cout<<"Reversed List: ";
    
    printForward(head);

    cout<<endl;

    cout<<"Backward printed reversed list = orignal list: ";
        Node* tail = head;
        while (tail->next != nullptr) {
        tail = tail->next;
    }
    printBackwar(tail);
 
return 0;
}