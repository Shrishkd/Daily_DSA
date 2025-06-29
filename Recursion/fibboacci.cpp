#include<bits/stdc++.h>
using namespace std;

int fib(int n){
    if( n==0){
        return 0;
    }
    if (n==1){
        return 1;
    }

    int ans = fib(n-1) + fib(n-2);
    return ans;
}
 
 
int main() {

//Using Recursion

cout<<" Using Recursion "<<endl;

int n;
cout<<"Enter the number: ";
cin>>n;
cout<<"Number at  "<<n<<"th position is: "<<fib(n)<<endl; 

//Using Loop

cout<<"Using Loop"<<endl;

    int num1 = 0;
    int num2= 1;
    int next_numb= num2;
    int post;
    cout<<"Enter the number: ";
    cin>>post;
    for(int i=0; i<=post-2;){
        next_numb = next_numb + num1;
        num1 = num2;
        num2 = next_numb;
        i++;
    }
    cout<<"Number at  "<<n<<"th position is: "<<next_numb;

 




return 0;
}