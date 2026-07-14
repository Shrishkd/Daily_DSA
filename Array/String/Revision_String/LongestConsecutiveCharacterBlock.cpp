// Longest Consecutive Character Block
#include<bits/stdc++.h>
using namespace std;

int main(){
     string s = "aaabbbbccddd";

     char ansChar = s[0];

     int count = 1;
     int maxlen = 1;

     for(int i =1; i<s.length(); i++){

        if(s[i]==s[i-1]){
            count++;
        }else{
            if(count>maxlen){
                maxlen=count;
                ansChar = s[i-1];
            }
            count =1;

        }
     }
     if(count>maxlen){
        maxlen=count;
        ansChar = s.back();
     }

     cout<<ansChar<<" "<<maxlen;
}