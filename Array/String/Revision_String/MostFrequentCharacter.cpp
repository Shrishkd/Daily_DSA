// Find the character that appears the maximum number of times

#include <bits/stdc++.h>
using namespace std;

int main(){
    string s = "eabddaceedbaddeffgehiojneee";

    vector<int> freq(26,0);

    for(char c : s){
        freq [c - 'a']++;
    }

    int count = 1;
    char ch;
    for (int i =0; i<26; i++){
        if (freq[i] > count){
            count = freq[i];
            ch = (i + 'a');
        }
    }
    cout<<"Most frequent character is: "<<ch;
}