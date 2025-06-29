#include <bits/stdc++.h>
using namespace std;

void SelectionSort( vector <int>&arr, int n){
    for(int i =0; i<n-1; i++){
        int minIndex = i;

        for(int j=i+1; j<n; j++){

            if(arr[j] < arr[minIndex])
                minIndex = j;
        }

        swap(arr[minIndex], arr[i]);
    }
}

int main(){

    vector <int> arr = {11,2,31,14};
    int n = arr.size();
    cout<<"Intial Array is: ";
    for(int i=0; i<n; i++){
        cout<< arr[i] <<" ";
    }
    cout<<endl;

    SelectionSort(arr,n);

    cout<<"Final Array is: ";
    for(int i=0; i<n; i++){
        cout<< arr[i] <<" ";
    }


    return 0;
}