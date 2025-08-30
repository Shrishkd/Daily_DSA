#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximum69Number (int num) {

        string str = to_string(num);

        for(int i=0; i<str.size(); i++){
            if(str[i] == '6'){
                str[i] = '9';
                break;
            }

        }
        return stoi(str);
    }
};
 
int main() {

    int num = 6969699;
    
    Solution obj;
    cout<<obj.maximum69Number(num);
    



return 0;
}