#include<bits/stdc++.h>
using namespace std;

int search(vector<int>&arr, int key){

    sort(arr.begin(), arr.end());
    int s = 0, e = arr.size()-1;

    while(s<=e){
        
        int mid = s + (e-s)/2;

        if (key==arr[mid]) return mid;

        if(key>arr[mid]){
            s = mid+1;
        }
        else if(key<arr[mid]){
            e=mid-1;
        }
    }
    return -1;

}

int main(){

    vector<int> arr = {2,8,10,12,18,21,23,25,32};

    int k = 10;

    int index = search(arr, k);

    if(index) cout<<k<<" is present at index: "<<index<<endl;

    else cout<<"key not present";

return 0;

}