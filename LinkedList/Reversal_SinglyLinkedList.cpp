#include<bits/stdc++.h>
using namespace std;

//Node Structure

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

//Funtion to reverse Linked List

//APPROACH 1 : USING LOOP (ITERATION)
/*  Node* ReverseLinkedList (Node* head){

    if(head == NULL || head-> next == NULL){
        return head;
    }

    Node* prev = NULL;
    Node* curr = head;
    Node* forward = NULL;

    while(curr!=NULL){
        forward = curr ->next;
        curr -> next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
} */

//APPROACH 2: USING RECURSION

void reverse(Node* &head, Node* curr, Node* prev){
    // base case
    if(curr == NULL){
        head = prev;
        return;
    }

    Node* forward = curr -> next;
    reverse(head, forward, curr);
    curr -> next = prev;
}

//APPROACH 3: USING RECURSION

// Node* reverse1(Node* head){
//     //base case
//     if(head == NULL || head-> next == NULL){
//         return head;
//     }

//     Node* chotaHead = reverse1(head -> next);

//     head -> next -> next = head;
//     head -> next = NULL;

//     return chotaHead;
// }

//Funtion to print linked list
void Print(Node* head){
    while(head != NULL){
        cout<< head-> data <<" ",
        head = head->next;
    }
    cout<<endl;
}


//Function to create Sample Linked List

Node* CreateSampleList(){
    
    Node* head = new Node(3);
    head->next = new Node(5);
    head->next->next = new Node(7);
    head->next->next->next = new Node(9);

    return head;
}
 
 
int main() {

    //Create a sample Linked List
    Node* head = CreateSampleList();
    Node* curr = head;
    Node* prev = NULL;

    cout<< "Original  List: ";
    
    Print(head);

    reverse(head, curr, prev);

    cout<< "Reversed  List: ";
    
    Print(head); 

    // reverse1(head);

    // cout<< "2 times Reversed  List: ";

    // Print(head);

 
 
return 0;
}