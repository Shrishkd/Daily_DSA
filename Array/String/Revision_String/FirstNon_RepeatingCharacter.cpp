// Return the first character whose frequency is 1.
#include <bits/stdc++.h>
using namespace std;

int main(){

    string s = "zxyy"; 

    vector<int> freq(26,0);

    for(char c:s){
        freq[c-'a']++;
    }

    for(char c:s){
        if(freq[c-'a']==1){
            cout << c;
            break;
        }else{
            continue;
        }
    }
}