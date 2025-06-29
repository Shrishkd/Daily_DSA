#include <bits/stdc++.h>
using namespace std;

char changeCase(char ch){
    if(ch>= 'a' && ch<='z'){
        return ch;
    }
    else if(char temp = ch - 'A' +'a') {
        
        return temp;
    }
    else{
        return ch;
    }
}

bool checkPalindrome(string s) {
    int i = 0;
    int j = s.size() - 1;

    while (i < j) {

        while(i<j && !isalnum(s[i])){
            i++;
        }
        while(i<j && !isalnum(s[j])){
            j--;
        }
        if (changeCase(s[i]) != changeCase(s[j])) {
            return false; 
        }
        i++;
        j--;
    }
    return true; 
}

int main() {
    string str = "c1 O$d@eeD o1c";
    if (checkPalindrome(str)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }
    return 0;
}
