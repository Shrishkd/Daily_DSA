#include<iostream>
using namespace std;

int main(){


    int n = 12;

    int sum = 0;

    while(n!=0){
        int temp = n%10;

        sum += temp;

        n/=10;
    }

    cout<<sum;

    return 0;
}