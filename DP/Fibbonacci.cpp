#include <iostream>
#include <vector>
using namespace std;

// Top-down (Recusrion + Memiozation)
int fibTopdown(int n, vector<int> &dp ){

    //base case
    if(n<=1){
        return n;
    }

    //step 3
    if(dp[n] != -1){
        return dp[n];
    }

    //step 2
    dp[n] = fibTopdown(n-2, dp) + fibTopdown(n-1, dp);
    return dp[n];

}


int main(){

    //Using Top-down
    cout<<"Using Top-down approach" << '\n';

    int n;
    cout<<"Enter the postion: ";
    cin>>n;

    //step 1
    vector<int> dp(n+1);
    for(int i = 0; i<=n; i++){
        dp[i] = -1;
    }

    cout<<"Number at  "<<n<<"th position is: "<<fibTopdown(n, dp)<<endl; 

    //Using Bottom Up approach (Tablulation)

    cout<<"Using bottom-up approach" << '\n';

    //step 1
    vector<int> dp2(n+1);

    //step 2
    dp2[0] = 0;
    dp2[1] = 1;

    //step 3
    for(int i = 2; i<=n; i++){
        dp2[i] = dp2[i-1] + dp2[i-2];
    }

    cout<<"Number at  "<<n<<"th position is: "<<dp2[n]<<endl; 




    return 0;
}