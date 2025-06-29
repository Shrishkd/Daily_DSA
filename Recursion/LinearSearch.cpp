#include<bits/stdc++.h>
using namespace std;

void print (int arr[], int n){
    cout << "Size: "<<n<<endl;

    for (int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

int LinearSearch(int arr[], int size, int k){
    print(arr, size);

    //base Case
    if(size == 0){
        return false;
    }

    if( arr[0]==k){
        return 1;
    }
    else {
        bool remainingPart = LinearSearch(arr+1, size-1, k);
        return remainingPart;
    }
}
 
 
int main() {

    int arr[5] = {4,8,7,9,1};
    int size = 5;
    int key = 9;

    int ans = LinearSearch(arr, size, key);
    if(ans){
        cout<<"Present";
    }
    else{
        cout<<"Absent";
    }
 
 
return 0;
}