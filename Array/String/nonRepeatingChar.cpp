#include<iostream>
using namespace std;

class Solution{
    public:

    char nonRepeat(string & s){
        int i=0;
        int j=i+1;
        while(i<j && s[i]!=s[j]){
            for(j<s.size(); j++;){
                if(s[i]==s[j]){
                    break;
                }
                else{
                    return s[i];
                }
            }
        }
    }
};

 
 
int main() {

Solution obj;
string s;

obj.nonRepeat(s);
return 0;
}