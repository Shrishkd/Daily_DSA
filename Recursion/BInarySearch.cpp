#include<bits/stdc++.h>
using namespace std;

void print(int arr[], int s , int e ){
    for (int i=s; i<=e; i++){
        cout<<arr[i]<<" ";

    }cout<<endl;
}

bool BinarySearch(int arr[], int s, int e, int k){

    print(arr, s, e);

    if(s>e){
        return false;
    }

    int mid = s + (e-s)/2;

    cout<<"Mid is : "<<arr[mid]<<endl;

    if(arr[mid]==k){
        return true; 
    }

    if(arr[mid]>k){
        return BinarySearch(arr, s, mid-1, k);
    }
    else{
        return BinarySearch(arr, mid+1, e, k);
    }
}
 
 
int main() {

    int arr[6] = {1,4,8,12,18,20};
    int size = 6;
    int key = 20;

    cout<<"Present or Not: "<<BinarySearch(arr, 0, 5, key)<<endl;

 
 
return 0;
}