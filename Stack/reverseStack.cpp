#include<bits/stdc++.h>
using namespace std;


//Using loop(myself)
void reverseStack(stack<int> &s) {
    stack<int> revStack;
    
    while(!s.empty()){
        int num = s.top();
        s.pop();
        revStack.push(num);
    }
    s= revStack;
}

//Using recusrion

void InsertAtBottom (stack<int> &stack, int x){

    if(stack.empty()){
        stack.push(x);
        return;
    }

    int top = stack.top();
    stack.pop();

    InsertAtBottom(stack, x);

    stack.push(top);

}

void reverseStackrecur(stack<int> &stack) {

    if(stack.empty()) return ;

    int num = stack.top();
    stack.pop();

    reverseStackrecur(stack);

    InsertAtBottom(stack, num);
}

 
 
int main() {
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(16);

    // Create a temporary copy for printing
    stack<int> temp = st;

    cout << "Stack contents (top to bottom): ";
    while(!temp.empty()){
        cout << temp.top() << " ";
        temp.pop(); // This empties the copy, not the original
    }
    cout << endl;

    return 0;
}