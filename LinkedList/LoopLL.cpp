#include<iostream>
#include<map>
#include<unordered_map>
#include<unordered_set>
using namespace std;

class Node{
public:

    int data;
    Node* next;
    Node* prev;

    Node(int val) : data(val), prev(nullptr), next(nullptr) {}
};

bool MapDetectLoop (Node* head){

    map<Node* , bool> visited;

    Node* temp = head;

    while(temp != nullptr){

        if(visited[temp]){
            return true;
        }

        visited[temp] = true;

        temp= temp->next;
    }
    return false;
}

bool HshMapDetectLoop(Node* head){

    unordered_map<Node* , bool> visited;

    Node* temp = head;

    while(temp != nullptr){

        if(visited[temp]){
            return true;
        }
        visited[temp] = true;

        temp= temp->next;
    }
    return false;
}

bool SetDetectLoop(Node* head){

    unordered_set<Node*> visited;

    Node* temp = head;

    while(temp != nullptr){

        if(visited.count(temp)){
            return true;
        }
        visited.insert(temp);

        temp= temp->next;
    }

    return false;
}

bool floydDetectLoop(Node* head){

    Node* slow = head;
    Node* fast = head;

    while(slow !=nullptr && fast != nullptr){
        fast= fast->next;
        if(fast != nullptr){
            fast= fast->next;
        }
        slow= slow->next;
        if(fast==slow)
        return true;
    }
    return false;
}

int main() {

    /*kindly replace the function name to check loop in line 91 and 107 
    MapDetectloop to HshMapDetectLoop to SetDetectLoop
    */

    // Step 1: Create individual nodes
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);

    // Step 2: Link the nodes together to form a linear chain
    // Head (10) -> (20) -> (30) -> (40) -> nullptr
    head->next = second;
    second->next = third;
    third->next = fourth;

    // Verify there is no loop yet
    cout << "Checking list before creating loop..." << endl;
    if (MapDetectLoop(head)) {
        cout << "Result: Loop detected! ❌" << endl;
    } else {
        cout << "Result: No loop detected. Clean list!  " << endl;
    }

    cout << "\n--- Creating a loop now ---" << endl;

    // Step 3: Connect the tail node back to an internal node (e.g., the second node)
    // Now the structure looks like this:
    // Head (10) -> (20) -> (30) -> (40) 
    //                ^              │
    //                └──────────────┘
    fourth->next = second; 

    // Step 4: Run the loop detection check again
    if (MapDetectLoop(head)) {
        cout << "Result: Loop detected!" << endl;
    } else {
        cout << "Result: No loop detected. Clean list!  " << endl;
    }

    // Note on Memory Cleanup: 
    // Normally, we would delete dynamically allocated memory here. 
    // However, because the list has an infinite loop, a standard 'while(temp != nullptr) delete temp;' 
    // will result in an infinite loop crash. To clean this up properly, 
    // we would first need to break the loop ('fourth->next = nullptr;') before deleting.

    return 0;
}
