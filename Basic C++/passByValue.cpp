#include <iostream>
using namespace std;

//PASS BY VALUE

void doSomething(int num){
    cout<< num << endl;
    num+=5;
    cout<< num << endl;
    num+=5;
    cout<< num << endl;
}

int main(){
    int num = 10;
    doSomething(num);
    cout<<num<<endl;   // Orginal value is stored in memory somewhere and it send copy of value to function not the real
    return 0;
}