#include<bits/stdc++.h>
using namespace std;


//Recursion

int Factorial(int num){

    // base case
    if(num<=1){
        return 1;
    }

    return num * Factorial(num-1);


}
 
 
int main() {
 
    int value = Factorial(6);

    cout<<"Fcatorial : " << value;
 
return 0;
}