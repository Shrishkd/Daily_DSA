#include <iostream>
#include <stack>
using namespace std;

void solve(stack<int>& myStack, int x) {
    if(myStack.empty()) {
        myStack.push(x);
        return;
    }
    int num = myStack.top();
    myStack.pop();
    solve(myStack, x);
    myStack.push(num);
}

stack<int> pushAtBottom(stack<int>& myStack, int x) {
    solve(myStack, x);
    return myStack;
}



void printStack(stack<int> s) {  // Pass by value (creates a copy)
    cout << "Stack (top to bottom): ";
    while(!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

int main() {
    stack<int> myStack;
    myStack.push(2);
    myStack.push(3);
    myStack.push(4);

    cout << "Initial stack: ";
    printStack(myStack);  // Pass a copy to avoid emptying original

    pushAtBottom(myStack, 1);

    cout << "After pushing 1 at bottom: ";
    printStack(myStack);

    return 0;
}



/*
int main() {
    stack<int> myStack;
    myStack.push(2);
    myStack.push(3);
    myStack.push(4);

    // Print original (and store elements)
    stack<int> temp;
    cout << "Initial stack: ";
    while(!myStack.empty()) {
        cout << myStack.top() << " ";
        temp.push(myStack.top());
        myStack.pop();
    }
    cout << endl;

    // Restore the stack
    while(!temp.empty()) {
        myStack.push(temp.top());
        temp.pop();
    }

    pushAtBottom(myStack, 1);

    cout << "After pushing 1 at bottom: ";
    while(!myStack.empty()) {
        cout << myStack.top() << " ";
        myStack.pop();
    }
    cout << endl;

    return 0;
}
*/