#include <iostream>
using namespace std;

bool CheckPallindrome(string s){


    int start = 0;
    int end = s.length()-1;

    while(start < end){
        if(s[start] != s[end]) return false;

        start++;
        end--;
    }
    return true;
}

int main(){

    string s = "racecar";

    if(CheckPallindrome(s)) cout<<" Pallindrome";
    else cout<<"Not a Pallindrome";


    return 0;
}