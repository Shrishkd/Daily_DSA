#include<bits/stdc++.h>
using namespace std;
 
 
int main() {

int num = 5;
int *ptr = &num;
cout<<"Value of num using  variable: "<< num<<endl;
cout<<"Value of num using  pointer: "<<*ptr<<endl;

cout<<"Address of of num using variable : "<< &num<<endl;
cout<<"Address of of num using pointer:  "<<ptr<<endl;

cout<<"Modifying the value by variable: "<<num+1<<endl;
cout<<"Modifying the value by pointer: "<<*ptr+1<<endl;

/*
pointer data type should be same as varible data type , for eg. in previous example num is int
data type so the ptr is. let see some example with other data types
*/ 
char ch = 'a';
char *ptr2 = &ch;
cout<<"Charchter type: "<<*ptr2<<endl;

double d= 5;
double *ptr3 = &d;
cout<<"Double type: "<<*ptr3<<endl;

//Size of Pointer

cout<<"Size of int: "<<sizeof(num)<<endl;
cout<<"Size of pointer of int: "<<sizeof(ptr)<<endl;
cout<<"Size of char: "<<sizeof(ch)<<endl;
cout<<"Size of pointer of char: "<<sizeof(ptr2)<<endl;
cout<<"Size of double: "<<sizeof(d)<<endl;
cout<<"Size of pointer of double: "<<sizeof(ptr3)<<endl;

//Copying and modifying the  value

int num2= 5;
int a = num2;
cout<<"Value of num before: "<<num2<<endl; 
a++;
cout<<"Value of num after: "<<num2<<endl;  // NO CHANGE



int *p = &num2;
cout<<"Value of num before: "<<num2<<endl;
(*p)++;
cout<<"Value of num after: "<<num2<<endl; //Change

return 0;
}