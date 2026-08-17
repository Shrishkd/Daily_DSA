#include<bits/stdc++.h>
using namespace std;

int main(){

    string s = "Banana";

    string ans = "";

    vector<int> freq(26,0);

    for(char c : s){
        if(freq[c-'a'] == 0){
            ans.push_back(c);
            freq[c-'a']++;
        }
    }

    cout<<ans;

return 0;

}