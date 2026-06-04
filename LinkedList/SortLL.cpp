#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int val) : data(val) , next(nullptr) {}

    ~Node(){
        data;
    };
};



class Solution{
public:

    Node* merge(Node* list1, Node* list2){

        Node* dummyNode = new Node(-1);

        Node* temp = dummyNode;

        while(list1 && list2){
            if(list1->data <= list2->data){
                temp->next=list1;
                list1 =  list1->next;
            }else{
                temp->next = list2;
                list2 = list2->next;
            }
            temp = temp->next;
        }

        if(list1){
            temp->next = list1;
        }else{
            temp->next = list2;
        }
        return dummyNode->next;

    }

    Node* findMiddle(Node* head){
        if(!head || !head->next) return head;

        Node* slow = head;
        Node* fast = head->next;

        while(fast && fast->next){
            slow= slow->next;
            fast= fast->next->next;
        }

        return slow;
        
    }

    Node* sort(Node* head){

        if(!head || !head->next) return head;

        Node* middle = findMiddle(head);

        Node* left = head;
        Node* right = middle->next;
        middle->next = nullptr;

        left = sort(left);
        right = sort(right);

        return merge(left, right);
    }

    void print(Node* head){
        Node* temp = head;
        while(temp){
            cout<< temp->data << " ";
            temp= temp->next;
        }
        cout << endl;
    }

};

int main(){

    Solution obj;

    Node* head = new Node(8);
    head->next = new Node(5);
    head->next->next =  new Node(11); 
    head->next->next->next   = new Node(13); 
    head->next->next->next->next   = new Node(2); 
    head->next->next->next->next->next   = new Node(6); 
    head->next->next->next->next->next->next   = new Node(1); 

    cout<< "Original Linked List " << endl;
    obj.print(head);

    head = obj.sort(head);
    cout << "Sorted Liked List " <<endl;

    obj.print(head);


    return 0;
}

