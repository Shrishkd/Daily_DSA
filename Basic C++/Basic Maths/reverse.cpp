#include <iostream>
using namespace std;

class Solution {
public:
    int reverse(int x) {
      int revNum =0;
      while (x>0){
        int Id = x%10;
        revNum = (revNum*10) + Id;
        x=x/10;
      };
    return revNum;

    }
};

int main(){
    

    Solution obj;
    cout<<obj.reverse(10250);

    return 0;
}