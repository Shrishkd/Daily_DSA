#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int val) : data(val), next(nullptr) {}
};

// Brute-force approach: O(n²) time, O(1) space
Node* deleteDuplicate(Node* head) {
    if (head == NULL) return NULL;

    Node* curr = head;

    while (curr != NULL) {
        Node* prev = curr;
        Node* temp = curr->next;

        while (temp != NULL) {
            if (curr->data == temp->data) {
                Node* nodeToDelete = temp;
                prev->next = temp->next;
                temp = temp->next;
                delete nodeToDelete;
            } else {
                prev = temp;
                temp = temp->next;
            }
        }

        curr = curr->next;
    }

    return head;
}

// Approach 2 : Sort the list and apply Remove duplicate sorted LL:  TC-> O(logn) ; SC-> O(n);


//Approach 3 : Using Mappnig : TC-> O(n); SC->O(n)

Node* deleteDuplicate(Node* head) {
    if (head == NULL) return NULL;

    unordered_map<int, bool> visited;
    Node* curr = head;
    Node* prev = NULL;

    while (curr != NULL) {
        if (visited[curr->data]) {
            // Duplicate found, delete it
            Node* nodeToDelete = curr;
            prev->next = curr->next;
            curr = curr->next;
            delete nodeToDelete;
        } else {
            // First occurrence, mark as visited
            visited[curr->data] = true;
            prev = curr;
            curr = curr->next;
        }
    }

    return head;
}


void printList(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    // Create a sample linked list: 1 -> 4 -> 3 -> 2 -> 3 -> 4 -> 1
    Node* head = new Node(1);
    head->next = new Node(4);
    head->next->next = new Node(3);
    head->next->next->next = new Node(2);
    head->next->next->next->next = new Node(3);
    head->next->next->next->next->next = new Node(4);
    head->next->next->next->next->next->next = new Node(1);

    cout << "Original list: ";
    printList(head);

    head = deleteDuplicate(head);

    cout << "List after removing duplicates: ";
    printList(head);

    return 0;
}
