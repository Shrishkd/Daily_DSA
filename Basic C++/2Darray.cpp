#include <iostream>
using namespace std;

int main (){
    int arr[3][5];
    
    arr[1][3]=45;
    cout<<arr[1][3]<<endl;

    cout<<arr[2][40]<<endl;  // if we call any random place value from array which is not defined that it gives any random garbage value.
    return 0;
}