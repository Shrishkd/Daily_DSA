#include <iostream>
using namespace std;

void doSomething (int num){  //there is no need to add '&' in array it is already Pass by Refrence by default 
}

int main(){
    int arr[5];
    for(int i=0; i<=4; i++){
        cin>> arr[i];       
    }
    for(int i=0; i<=4; i++){
        cout<< arr[i]<< " ";
    }
return 0;    
}