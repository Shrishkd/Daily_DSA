#include <iostream>
#include <vector>
using namespace std;

bool checkAnagram(string s , string t){
    if(s.size() != t.size()) return false;

    vector<int> freq(26,0);
    for(int i = 0; i<s.size()-1; i++){
        freq[s[i]-'a']++;
        freq[t[i]-'a']--;
    }

    for(int count : freq){
        if(count != 0) return false;
    }

    return true;

}

int main(){

    string s = "caroo";
    string t = "raco";
    if(checkAnagram(s,t)) cout<<"Anagram";
    else cout<<"Not Anagram";

    return 0;
}