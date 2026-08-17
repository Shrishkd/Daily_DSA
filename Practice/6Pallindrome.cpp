#include<iostream>
using namespace std;

int reverse(int n){

    int rev = 0;
    while(n!=0){
        rev = rev * 10 + n%10;
        n/=10;
    }

    return rev;
}

bool CheckPallindrome(int num){
    int temp = num;

    int rev = reverse(num);

    if(temp==rev){
        return true;
    }

    return false;
}

int main(){

    int n;
    cout<<"Enter the number: ";
    cin>>n;

    if(CheckPallindrome(n)) cout<<"Number is Pallindrome";
    else cout<<"Number is not Pallindrome";

    return 0;
}