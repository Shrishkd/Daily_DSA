#include<iostream>
using namespace std;

int main(){

    string s = "hello";

    int i = s.length()-1;

    while(i>=0){
        cout<<s[i];
        i--;
    }
    return 0;
}