#include <iostream>
using namespace std;

//PASS BY VALUE

void doSomething(int &num){  //here we '&' to pass by refrence , unlike pass by value it sends the original value
    cout<< num << endl;
    num+=5;
    cout<< num << endl;
    num+=5;
    cout<< num << endl;
}

int main(){
    int num = 10;
    doSomething(num);
    cout<<num<<endl;   
    return 0;
}