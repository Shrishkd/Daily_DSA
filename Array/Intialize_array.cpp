#include<iostream>
using namespace std;
void printArray(int arr[], int size){
    cout<<"Printing the array "<<endl;
    
    for (int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

 
 
int main() {

    int a[10] ={0};
    int b[10] ={5};
    int c[10];
    for (int i=0; i<10; i++){
        c[i]=5;
    }
    cout<<"Element of a: ";
    printArray(a, 10);
    cout<<endl;

    cout<<"Element of b: ";
    printArray(b, 10);
    cout<<endl;


    cout<<"Element of c: ";
    printArray(c, 10);
    cout<<endl;


    int d[15]={2,7,8};
    for (int i=0; i<15; i++){
        cout<<d[i]<<" ";
    }
    cout<<endl;


    //Finding the size of an array
    int dSize=sizeof(d)/sizeof(int);
    cout<<"Size of array name d is: "<<dSize<<endl;



    //CHARCTER ARRAY

    char ch[5]= {'a', 'b', 'c', 't', 'q'};
    for (char i=0; i<5; i++){
        cout<<ch[i]<<" ";
    }

    //OTHERS TYPE OF ARRAYS

    double dbl[5];
    float flt[4];
    bool bl[7];


    
    
 
 return 0;
}