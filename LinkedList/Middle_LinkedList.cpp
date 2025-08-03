#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;

//constructor

Node(int d){
    this-> data = d;
    this-> next= NULL;
}

};

//APPROACH 1 
int getLength(Node* head){

    int len = 0;
    while(head!= NULL){
        len++;
        head= head->next;
    }
    return len;
};

Node* getMiddle(Node* head){

    int len = getLength(head);
    int mid = (len/2);

    Node* temp = head;

    int cnt =0;

    while(cnt<mid){
        temp= temp->next;
        cnt++;
    }

    return temp;

}

//APPROACH 2 : OPTIMMISED
Node* findMid(Node* head){

    //for empty and single node
    if(head == NULL || head -> next == NULL){
        return head;
    }

    //for 2 node
    if(head->next->next == NULL){
        return head->next;
    }

    Node* slow = head;
    Node* fast = head->next;
    

    while(fast!=NULL){
        fast =  fast->next;
        if(fast!= NULL){
            fast = fast->next;
        }
        slow = slow->next;

    }
    return slow;
}


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
    head->next->next->next->next = new Node(11);
    head->next->next->next->next->next = new Node(13);

    return head;
}
 
 
int main() {

    //Create a sample Linked List
    Node* head = CreateSampleList();
    Node* curr = head;
    Node* prev = NULL;

    cout<< "Original  List: ";
    
    Print(head);

    cout<<"Middle Element: " << getMiddle(head)->data;

    cout<<endl;

    cout<<"Middle Element: " << findMid(head)->data;



 
 
return 0;
}