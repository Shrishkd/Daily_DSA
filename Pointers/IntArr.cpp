#include<bits/stdc++.h>
using namespace std;
 
 
int main() {
 
 int arr[10] = {5, 8, 7, 9 , 12 , 41 , 56, 12 , 4 , 7};

 cout<<" Exp 1: "<<arr<<endl;       // Return the adress of first memory block
 cout<<" Exp 3: "<<&arr[0] <<endl;  // Return the adress of first memory block
 cout<<" Exp 4: "<< &arr <<endl;    // Return the adress of first memory block
 cout<<" Exp 2: "<<arr[0] <<endl;   //Return the value of item in first block
 cout<<" Exp 5: "<<*arr <<endl;     //Return the value of item in first block
 //cout<<" Exp 8: "<<*arr[4]<<endl;
 cout<<" Exp 6: "<<*(arr + 1) <<endl; //Return the value of item present in (first block + 1) block
 cout<<" Exp 7: "<<(*arr) + 1 <<endl; //return the value of item present in first block +1

 int temp[10] = {1,2};

 cout<<" Exp 8: "<<sizeof(temp)<<endl; // total size of arr, that is  4x10 = 40
 cout<<" Exp 9: "<<sizeof(*temp)<<endl; // size of first block
 cout<<" Exp 10: "<<sizeof(&temp)<<endl; // size of adress of first (for my pc : 4 ; for pc of ram 64 : 8 )

 int *ptr = &temp[0];
 cout<<" Exp 11: "<<sizeof(ptr)<<endl; //8
 cout<<" Exp 12: "<<sizeof(*ptr)<<endl; //4
 cout<<" Exp 13: "<<sizeof(&ptr)<<endl; //8


 int ar[10]={0};
 // arr=arr+1; : ERRROR

 int *pot=&ar[0];
 cout<<pot<<endl; //Address of first block
 pot=pot+1;
 cout<<pot<<endl;  //Address of second block, +4 more than previous block
 

 
return 0;
}