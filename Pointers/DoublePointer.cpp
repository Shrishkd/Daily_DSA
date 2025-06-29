#include<bits/stdc++.h>
using namespace std;
 
 
int main() {
 
 int i= 5;
 int *ptr=&i;
 int **ptr2=&ptr; 

 cout<<"Value of i: "<<i<<endl;
 cout<<"Address of i: "<<&i<<endl;
 cout<<"Value of ptr: "<<ptr<<endl; //same as address of i
 cout<<"Address of ptr: "<<&ptr<<endl;
 cout<<"Value of ptr2: "<<ptr2<<endl; // Same as adress of ptr
 cout<<"Value of i: "<<*ptr<<endl;
 cout<<"Value of i: "<<**ptr2<<endl;


return 0;
}