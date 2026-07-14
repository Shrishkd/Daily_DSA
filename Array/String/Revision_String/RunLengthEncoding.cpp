// Run Length Encoding
#include<iostream>
#include<vector>
using namespace std;

int main(){

    string s = "aaabbccaacc";

    int count = 1;

    for(int i = 1; i<s.length(); i++){
        if(s[i]==s[i-1]) count ++;

        else{
            cout<<s[i-1]<<count;
            count=1;
        }
    }
    cout<<s.back()<<count;

}