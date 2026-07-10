#include<iostream>
#include<vector>
using namespace std;

int main(){

    string s = "eabddaceedbaddeffgehiojneee";

    vector<int> freq (26,0);

    for(char c : s){
        freq[c-'a']++;
    }
    int count = 0;
    cout<<"Distinct Charcters: ";
    for(int i =0; i<26; i++){

        if(freq[i]>0){
            count++;
            cout<<char(i+'a')<<" ";
        }
    }
    cout<<endl;
    cout<<"Total Distinct char: "<<count;
}