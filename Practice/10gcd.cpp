#include <iostream>
#include <cmath>
#include <numeric>
using namespace std;

    int findGCD(int a , int b){

        // if(a==0){
        //     return b;
        // }
        // if(b==0){
        //     return a;
        // }

        // if(a==b){
        //     return a;
        // }

        // if(a>b){
        //     return gcd(a-b, b);
        // }

        // return gcd(a,b-a);

        if(b==0) return a;

        return findGCD(b, a%b);


    }

int main(){

    int a = 20;
    int b = 28;

    int ans = findGCD(a,b);
    // int ans2 = std::gcd(a,b);

    cout<<ans<<endl;
    // cout<<ans2<<endl;

    return 0;
}