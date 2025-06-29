#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

void swapAlternate(int arr[], int size){
    for (int i=0; i<size; i+=2){
        if (i+1<size){
            swap(arr[i], arr[i+1]);
        } 
    }
}
 
 
int main() {

    int evenNumb[8]={7,5,2,12,32,42,25,16};
    int oddNumb[5]={19,22,15,2,7};

    swapAlternate(evenNumb, 8);
    printArray(evenNumb,8);

    cout<<endl;


    swapAlternate(oddNumb, 5);
    printArray(oddNumb,5);

 
 
return 0;
}