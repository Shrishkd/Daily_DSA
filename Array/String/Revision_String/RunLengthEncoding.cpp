// Run Length Encoding
#include<iostream>
#include<vector>
using namespace std;

int main(){

    string s = "aaabbcccc";

    vector<int> freq (26,0);

    for(char c:s){
        freq[c-'a']++;
    }

    for (int i =0; i<26; i++){
        if(freq[i] > 0){
            cout<<char(i+'a')<<freq[i];
        }
    }

}