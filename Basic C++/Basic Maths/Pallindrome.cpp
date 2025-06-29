#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        int n = x;
        int revNum =0;
        while (n>0){
            int Id = n%10;
            revNum = (revNum*10) + Id;
            n=n/10;
        };
       if (revNum==x){
            return true;
        }else{
            return false;
        }
    
    }
};

int main(){
    Solution obj;
    cout<<obj.isPalindrome(11221);
}
