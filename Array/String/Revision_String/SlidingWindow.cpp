// Longest Substring Without Repeating Characters
#include <iostream>
#include <unordered_map>
using namespace std;

int solution(string s){

    unordered_map<char, int> mp;

    int l = 0;
    int ans = 0;

    for(int r=0; r<s.length(); r++){

        mp[s[r]]++;
        while(mp[s[r]]>1){
            mp[s[l]]--;
            l++;
        }
        ans = max(ans, r-l+1);
    }
    return ans;
}

int main(){

    string s = "abcabcbb";
    cout<<solution(s);


    return 0;
}