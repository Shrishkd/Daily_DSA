#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};

// Approach 1
/*Node* sortList(Node *head){
    
    int zeroCount = 0;
    int oneCount = 0;
    int twoCount = 0;

    Node* temp = head;

    while(temp!= NULL){
        if(temp -> data == 0){
            zeroCount++;
        }
        else if(temp -> data == 1){
            oneCount++;
        }

        else if(temp -> data == 2){
            twoCount++;
        }

        temp = temp->next;
    }
    temp = head;
    while(temp != NULL){
        if(zeroCount != 0){
            temp->data = 0;
            zeroCount--;
        }

        else if(oneCount != 0){
            temp->data = 1;
            oneCount--;
        }
        else if(twoCount !=0){
            temp->data = 2;
            twoCount--;
        }
        temp = temp ->next;
    }
    return head;
}*/

// Approach 2

void insertTail (Node* &tail, Node* curr){

    tail->next = curr;
    tail = curr;

}

Node* sortList (Node* &head){

    Node* zeroHead = new Node(-1);
    Node* zeroTail = zeroHead;
    Node* oneHead = new Node(-1);
    Node* oneTail = oneHead;
    Node* twoHead = new Node(-1);
    Node* twoTail = twoHead;


    Node* curr = head;

    while(curr!=NULL){

        int value = curr->data;

        if(value == 0){
            insertTail(zeroTail, curr);
        }
        else if(value == 1){
            insertTail(oneTail, curr);
        }
        else if(value == 2){
            insertTail(twoTail, curr);
        }
        curr = curr->next;
    }

    //merge 3 dummy node

    if(oneHead ->next != NULL){
        zeroTail->next = oneHead ->next;
        oneTail->next = twoHead -> next;
    }
    else{
        zeroTail->next = twoHead -> next;
    }


    twoTail->next = NULL;


    head = zeroHead->next;

    delete zeroHead;
    delete oneHead;
    delete twoHead;

    return head;

}

int main() {
    // Create a sample linked list: 1 -> 0 -> 2 -> 1 -> 0 -> 2 -> 1
    Node* head = new Node(1);
    head->next = new Node(0);
    head->next->next = new Node(2);
    head->next->next->next = new Node(1);
    head->next->next->next->next = new Node(0);
    head->next->next->next->next->next = new Node(2);
    head->next->next->next->next->next->next = new Node(1);

    cout << "Original list: ";
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    // Sort the list
    head = sortList(head);

    cout << "Sorted list: ";
    temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    // Free memory
    while (head != NULL) {
        Node* toDelete = head;
        head = head->next;
        delete toDelete;
    }

    // Test with empty list
    head = NULL;
    head = sortList(head);
    cout << "Empty list after sorting: ";
    if (head == NULL) {
        cout << "NULL" << endl;
    }

    // Test with single element
    head = new Node(1);
    head = sortList(head);
    cout << "Single element list after sorting: ";
    temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    // Free memory
    delete head;

    return 0;
}