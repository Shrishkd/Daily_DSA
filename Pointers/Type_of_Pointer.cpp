#include<bits/stdc++.h>
using namespace std;
 
 
int main() {
//NULL POINTER

int *p; // contains garbage value
int *p= NULL;   // Constant value of 0;
int *p=0;   // Constant value of 0;

//Double Pointers
int a = 5;
int *p= &a; //pointer
int **q=&p; // pointer to pointer


/* Next three statements will print same value i.e. address of a */
    cout <<"Adress of a : "<< & a << endl;
    cout <<"Adress of a: "<< p << endl;
    cout << "Adress of a: "<<* q << endl;
    /* Next two statements will print same value i.e. address of p */
    cout <<"Address of p: "<< & p << endl;
    cout <<"Address of p: "<< q << endl;
    /* Next three statements will print same value i.e. value of a */
    cout <<"Value of a: "<< a << endl;
    cout <<"Value of a: "<< * p << endl;
    cout <<"Value of a: "<< ** q << endl;

//VOID POINTER
void * ptr;
    int i = 10;
    // assign int address to void
    ptr = & i;
    cout << "Address of variable i " << & i << endl;
    cout << "Address where the void pointer is pointing " << ptr <<  endl;

//WILD POINTER

int *point; //wild pointer
* point = 5;

int * p; /* wild pointer */
int a = 10;
p = & a; /* p is not a wild pointer now*/
* p = 12; /* This is fine. Value of a is changed */
//In the above program, p is a wild pointer till this points to a.
 
return 0;
}