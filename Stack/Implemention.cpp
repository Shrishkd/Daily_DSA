#include <iostream>
#include <stack>
using namespace std;

class Stack{
    public:

        int *arr;
        int top;
        int size;

    Stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element){
        if(size - top > 1){
            top++;
            arr[top] = element;
        }
        else{
            cout<< "Stack Overflow"<<endl;
        }

    }

    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"Satck Underflow"<<endl;;
        }
    }

    int peek(){
        if(top>=0){
            return arr[top];
        }
        else{
            cout<<"Empty is empty"<<endl;
            return -1;
        }
    }

    bool isEmpty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){


    // Array implementation

    Stack st(5);

    st.push(22);
    st.push(43);
    st.push(44);
    st.push(22);
    st.push(43);
    st.push(44);

    cout << st.peek() << endl;

    st.pop();

    cout << st.peek() << endl;

    st.pop();

    cout << st.peek() << endl;

    st.pop();

    cout << st.peek() << endl;

    if(st.isEmpty()) {
        cout << "Stack to Empty hai Laadle " << endl;
    }
    else{
        cout << "Stack Empty nahi hai Laadle " << endl;
    }


    /* 

        Using STL

    //Creation of stack
    stack <int> s;

    //Insert Element
    s.push(2);
    s.push(3);

    //Remove Element

    s.pop();

    cout<<"Top Element in stack: " << s.top() << endl;

    if(s.empty()){
        cout<< "Stack is Empty "<<endl;
    }
    else{
        cout<<"Stack is not Empty"<<endl;
    }

    cout<<"Size of element: " << s.size();

    */

}