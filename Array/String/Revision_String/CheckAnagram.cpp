// Check Anagram: An anagram string is a word or phrase formed by rearranging the letters of another word or phrase, using all the original letters exactly once.
#include<iostream>
#include<vector>
using namespace std;

bool CheckAnagram(string s1, string s2){

    vector<int> vec1(26,0);
    vector<int> vec2(26,0);

    for(char c:s1){
        vec1[c - 'a']++;
    }

    for(char c: s2){
        vec2[c - 'a']++;
    }

    if (vec1 == vec2 ) return true;
    else return false;

    return false;

}

int main(){
    string s1 = "silent";
    string s2 = "listen";

    if (CheckAnagram(s1,s2)){
        cout<<" Anagram";
    }else{
        cout<<"Not Anagram";
    }

    return 0;

}