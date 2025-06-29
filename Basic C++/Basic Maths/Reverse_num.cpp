#include <bits/stdc++.h>
using namespace std;

class Solution{
public: 
    int revNumb(long N){
        int lastDigit;
        while(N>0){
            if (lastDigit !=0){
                lastDigit =N%10;
                cout<<lastDigit;
            }
            N=N/10;   
        }
        return lastDigit;
    }
};

int main(){
    long N;
    cout<<"Input Number: ";
    cin>>N;
    Solution obj;
    return obj.revNumb(N);

}