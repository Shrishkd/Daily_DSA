#include <iostream>
using namespace std;

//Functions are set of code which performs something for you
//Functions are used to modularise code
//Function are used to increase redability
//Function are used to use same code multipe times
//TYPES OF FUNCTION
//VOID: Which does not returns anything
//RETURN: Return something at the end
//PARAMATERISED
//NON PARAMATERISED

void printName(string naam){
    cout<<"hey " << naam << endl;
}

int main(){
    string name;
    cin>>name;
    printName(name);

    string name2;
    cin>> name2;
    printName(name2);
    return 0;
    
}