#include <iostream>
#include <stack>
using namespace std;

int main(){

    //Creationn of stack
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

}