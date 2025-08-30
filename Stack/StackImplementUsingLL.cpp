#include <bits/stdc++.h>
using namespace std;

// Node structure for the linked list
struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

// Stack class using Linked List
class Stack {
private:
    Node* head; // Top of the stack

public:
    // Constructor
    Stack() : head(nullptr) {}

    // Push operation - Insert at the beginning
    void push(int val) {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
        cout << val << " pushed to stack\n";
    }

    // Pop operation - Remove from the beginning
    void pop() {
        if (empty()) {
            cout << "Stack is empty! Cannot pop.\n";
            return;
        }
        Node* temp = head;
        head = head->next;
        cout << temp->data << " popped from stack\n";
        delete temp;
    }

    // Top operation - Peek at the top element
    int top() {
        if (empty()) {
            cout << "Stack is empty! No top element.\n";
            return -1; // Return an invalid value
        }
        return head->data;
    }

    // Empty check
    bool empty() {
        return head == nullptr;
    }

    // Destructor to free memory
    ~Stack() {
        while (!empty()) {
            pop();
        }
    }
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element: " << s.top() << "\n";


    s.pop();
    cout << "Top after pop: " << s.top() << "\n";

    while (!s.empty()) {
        s.pop();
    }

    s.pop(); // Trying to pop from empty stack
}
