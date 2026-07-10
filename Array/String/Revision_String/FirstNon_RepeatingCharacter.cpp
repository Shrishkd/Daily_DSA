// Return the first character whose frequency is 1.
#include <bits/stdc++.h>
using namespace std;

int main(){

    string s = "aabbcdde"; 

    vector<int> freq(26,0);

    for(char c:s){
        freq[c-'a']++;
    }

    for(int i =0 ; i<26; i++){
        if(freq[i]==1){
            cout << char(i + 'a');
            break;
        }else{
            continue;
        }
    }
}