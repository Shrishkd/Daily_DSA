#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int s, int mid, int e){
        vector<int> temp;
        int left = s;
        int right = mid+1;
        while(left <= mid && right<=e){
            if(arr[left]<= arr[right]){
                temp.push_back(arr[left]);
                left++;
            }
            else{
                temp.push_back(arr[right]);
                right++;
            }
        }
        while(left<=mid){
            temp.push_back(arr[left]);
            left++;
        }
        while(right<=e){
            temp.push_back(arr[right]);
            right++;
        }

        for(int i=s; i<=e; i++){
            arr[i] = temp[i-s];
        }
};
 
void mergeSort(vector<int> &arr, int s, int e){
// base case
    if(s>=e){
        return;
    }
    int mid = s + (e-s)/2;
    mergeSort(arr, s, mid);
    mergeSort(arr, mid+1, e);
    merge(arr, s, mid, e);

};

int main() {

    int size;
    cout<<"Enter size: ";
    cin>>size;

    vector <int> arr(size);
    cout<<"Enter Elements: ";

    for(int i=0; i<=size-1;i++){
        cin>>arr[i]; 
    }

    mergeSort(arr, 0, size-1);

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }   cout<<endl;
 
return 0;
}