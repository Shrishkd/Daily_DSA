#include <iostream>
using namespace std;

class Node{
public:

    int data;
    Node* prev;
    Node* next;

    Node(int val): data(val), prev(nullptr), next(nullptr) {}
};

void middle(Node* &head){
    
};

void print(Node* &head){
    Node* temp = head;

    while(temp !=  NULL){
        cout<< temp -> data << " ";
        temp = temp -> next;
    }
    cout<< endl;
}