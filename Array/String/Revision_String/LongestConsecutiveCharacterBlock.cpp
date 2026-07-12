// Longest Consecutive Character Block
#include <bits/stdc++.h>
using namespace std;

int main(){

    string s = "aaabbbbccddd";

    vector<int> freq (26,0);

    for(char c: s){

        freq[c-'a']++;
    }
    int maxm = 0;
    for(int i = 0; i<s.length(); i++){
        maxm = max(maxm, freq[i]);
    }

    for(int i = 0; i<s.length(); i++){
        if(freq[i] == maxm)
            cout<<char(i+'a')<<" "<<maxm;
    }
}