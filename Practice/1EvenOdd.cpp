#include <iostream>
using namespace std;

class Solution{
public:
    bool Check(int n){

        if(n & 1){
            return true;
        }

    return false;
    }
};

int main(){

    int n;
    cout<<"Enter Number: ";
    cin>>n;

    Solution obj;
    if (obj.Check(n)){
        cout<<"Number is ODD";
    }else{
        cout<<"Number is Even";
    }

    return 0;

}