#include<bits/stdc++.h>
using namespace std;

bool checkPallindrome(string str, int s, int e){
    //base case
    if(s>e){
        return true;
    }

    if(str[s] != str[e]){
        return false;
    }
    else{
        return checkPallindrome(str, s+1, e-1);
    }

}
 
 
int main() {
 
    string word = "abcdba";
    cout<<endl;

    bool isPallindrome= checkPallindrome(word, 0 , word.length()-1);

    if(isPallindrome){
        cout<<"It is Pallindrome"<<endl;
    }
    else{
        cout<<"It is not Pallindrome"<<endl;
    }

 
return 0;
}