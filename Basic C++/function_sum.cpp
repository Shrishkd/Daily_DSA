#include <iostream>
using namespace std;

//creating name function with both void and return function


//RETURN FUNCTION

// int sum (int num1, int num2){
//     int num3= num1 + num2;
//     return num3;
// }

// int main(){
//     int num1, num2;
//     cin>>num1>>num2;
//     int res = sum(num1, num2);
//     cout<<res;
//     return 0;
// }

//VOID FUNCTION

void add(int numb1, int numb2){
    int numb3= numb1 + numb2;
    cout<<numb3;

}

int main(){
    int number1, number2;
    cin>>number1>>number2;
    add(number1, number2);
    return 0;
}

