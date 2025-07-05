#include <bits/stdc++.h>
using namespace std;
int partition(vector<int> &arr, int s, int e){
    
    int pivot = arr[s];
    
    int cnt =0;
    for (int i=s+1; i<=e; i++){
        if (arr[i]<pivot)
        cnt++;
    }

    //Place pivot at its right index
    int pivotIndex = s+cnt;
    swap(arr[pivotIndex], arr[s]);

    //swap value less than pivot to left and value greater than pivot on its right
    int i =s, j=e;
    while(i<pivotIndex && j>pivotIndex){
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]> pivot){
            j--;
        }

        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i++], arr[j--]);
        }
    }

    return pivotIndex;

}

void QuickSort(vector<int> &arr, int s, int e){
    //base case
    if(s>=e){
        return;
    }

    // Partition call
    int p = partition(arr, s, e);

    //left sort
    QuickSort(arr, s , p-1);

    //Right sort
    QuickSort(arr, p+1, e);

}

int main(){
    vector<int> arr = {10,8,15,2,1,7,8,21};

    QuickSort(arr, 0, arr.size()-1);

    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    

    return 0;
}