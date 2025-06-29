#include <iostream>
using namespace std;

//min and max is inbuilt function

int maxx(int num1, int num2){
    if (num1>=num2) return num1;
    else return num2;

}

int main(){
    int numb1, numb2;
    cin>>numb1>>numb2;
    int maximum = maxx(numb1, numb2);
    cout<<maximum;
    return 0;
}