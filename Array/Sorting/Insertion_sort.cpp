#include <bits/stdc++.h> 
using namespace std;

void InsertionSort (int arr[], int n){
    for (int i=1; i<n; i++){
        int temp = arr[i];
        int j=i-1;
        for (; j>=0; j--){
            if(arr[j]>temp){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }
}

int main(){
    
    int n= 4;
    int arr[] = {11,2,31,14};

    cout<<"Intial Array is: ";
    for(int i=0; i<n; i++){
        cout<< arr[i] <<" ";
    }
    cout<<endl;

    InsertionSort(arr,n);

    cout<<"Final Array is: ";
    for(int i=0; i<n; i++){
        cout<< arr[i] <<" ";
    }


    return 0;

}