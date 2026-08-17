#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"How many number first fibbonacci umber you want: ";
    cin>>n;

    int a=0;
    int b=1;
    int i = 0;
    while(i<n){
        cout<<a<<" ";
        int c = a + b;
        a = b;
        b = c;
        i++;
    }

    return 0;
}