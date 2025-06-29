#include<iostream>
using namespace std;
int sum(int num[], int size){
    int add=0;
    for(int i=0; i<size; i++){
        add=num[i]+add;
    }
    return add;
}
 
 
int main() {

    cout<<"Enter the size and elements: "<<endl;
    int size;
    cin>>size;

    int num[100];

    for(int i=0; i<size; i++){
        cin>>num[i];
    }

    cout<<"Sum of given number is: "<<sum(num, size);
 
return 0;
}