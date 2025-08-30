#include<iostream>
#include <stack>
using namespace std;

bool isValidParanthesis(string expression){

    stack<char> stk;

    for(int i=0; i<expression.size(); i++) {

        char ch = expression[i];


        //for opening brackets
        if(ch =='(' || ch=='{' || ch=='['){
            stk.push(ch);
        }

        //for closing bracketes
        else{
            if(!stk.empty()){
                char top = stk.top();
                if((ch==')' && top == '(') ||
                    (ch=='}' && top == '{') ||
                    (ch==']' && top == '[')) 
                    {
                        stk.pop();
                    }
                    else{
                        return false;
                    }
            }
            else return false;

        }

    }
    if(stk.empty())
        return true;
    else
        return false;
}
int main() {
    cout << isValidParanthesis("(){}[]") << endl;   // 1 (true)
    cout << isValidParanthesis("(]") << endl;       // 0 (false)
    cout << isValidParanthesis("({[]})") << endl;   // 1 (true)
    cout << isValidParanthesis("({[})") << endl;    // 0 (false)

    return 0;
}
