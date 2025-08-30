#include<iostream>
#include<stack>
using namespace std;


int main(){
    string str= "Shrish Das";

    stack<char> s;

    for(int i=0; i<str.length(); i++){
        char ch = str[i];
        s.push(ch);
    }

    string reverseString = "";
    while(!s.empty()){
        char ch = s.top();
        reverseString.push_back(ch);

        s.pop();
    }
    cout<<"Reversed String: " <<reverseString<<endl;

    return 0;
}

