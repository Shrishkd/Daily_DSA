#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n ){
    if (n<=1) return false;
    for(int i=2; i*i<=n; i++){
        if(n%i==0) return false;
    }
    return false;
}

int main(){

    int n;
    cout<<"Enter the number: ";
    cin>>n; 
    if(n<=1){
        cout<< n << " is neither Prime nor Composite." << endl;
    }else{
        if(isPrime(n)) cout<<"Prime Number";
        else cout<<"Composite number";

    }
    
    return 0;
}