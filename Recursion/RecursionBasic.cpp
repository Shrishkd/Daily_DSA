#include <iostream>
using namespace std;

int factorial (int n){
    if (n==0){
        return 1;
    }

    int SamllerProblem = factorial(n-1);
    int BigProblem = n * SamllerProblem;

    return BigProblem;

    //OR WE CAN WRITE:  return n * factorial(n-1);
}

    int Exponent(int base, int power){
        if (power ==0){
            return 1;
        }
        if (base== 0){
            cout<<" Base should be 1 or more";
        }

        // int smallerProblem = Exponent(base, power-1);
        // int biggerProblem = base * smallerProblem;

        // return biggerProblem;

        return base * Exponent(base, power-1);

    }

int main(){

    // int n;
    // cout<<"Enter number: ";
    // cin>>n;
    // cout<<"Factorial of " << n << " is: " <<factorial(n);


    int base, power;
    cout<<"Enter Base number: ";
    cin>>base;

    cout<<"Enter power: ";
    cin>>power;

    cout<<"Solution of base " << base << " to the power "<<power << " is: " << Exponent(base, power);


    return 0;
}