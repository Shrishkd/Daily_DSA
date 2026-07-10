// Given a string containing lowercase letters, print the frequency of each character.

#include <iostream>
#include <vector>
using namespace std;

int main(){

    string s = "abddacdbadd";

    vector<int> freq(26,0);

    for(char c : s){
        freq[c-'a']++;
    }

    for(int i=0; i<26; i++){
        if(freq[i]>0){
            cout<<char(i + 'a') <<" -> " << freq[i]<<endl;
        }
    }

}