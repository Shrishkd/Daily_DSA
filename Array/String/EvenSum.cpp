// Find all characters whose total frequency is even, and return the sum of their frequencies.
#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int> freq(26,0);
    string s = "aabbbbccddd";

    for(char c:s){
        freq[c-'a']++;
    }

    int ans = 0;
    for (int x: freq){
        if(x % 2 == 0 && x>0){
            ans += x;
        }
    }

    cout<<"Sum: "<< ans<<endl;

    //using  Hashmap

    unordered_map<char , int> mp;

    for(char c : s){
        mp[c]++;
    }

    int ans2 = 0;

    for (auto p:mp){
        if(p.second % 2==0){
            ans2 +=p.second;
        }
    }
    cout << "Sum using HashMap: " << ans2;
}