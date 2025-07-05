#include<bits/stdc++.h>
using namespace std;
void bubbleSort(vector<int>& arr, int n)
{   
    for(int i = 1; i<n; i++) {
        //for round 1 to n-1
        bool swapped = false;
        
        for(int j =0; j<n-i; j++) {
            
            //process element till n-i th index
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
            
        }
        
        if(swapped == false) {
            //already sorted
            break;
        }
    }
}
int main(){
    vector<int> arr = {10,8,15,2,1,7,8,21};
    int n=8;
    bubbleSort(arr,n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}