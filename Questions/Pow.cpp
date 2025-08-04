#include<iostream>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        long long power = n;
        if(power<0){
            power = -power;
            x = 1/x;
        }

        //base case;

        if(power==0){
            return 1;
        }
        // without half
        // return x * myPow(x, n - 1); (MORE TC)
        double half = myPow(x, power/2);

        if(power%2==0){
            return half * half;
        }

        else{
            return half * half * x;
        }

    }
};
 
int main() {
 double base = 2;
 int power = 4;

 Solution obj;

 double result = obj.myPow(base, power);

 cout<<"Result: " <<result;
 
return 0;
}