// Find how many unique characters are present.

#include<bits/stdc++.h>
using namespace std;

int main(){

    string s="abddacdbadd";
    vector<int> freq(26,0);

    for(char c:s){
        freq[c-'a']++;
    }

    int count = 0;

    for(int i = 0; i<26; i++){
        if(freq[i]>0){
            count++;
        }
    }

    cout<<"Total Distinct char: "<<count;


}