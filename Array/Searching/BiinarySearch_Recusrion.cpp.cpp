#include<bits/stdc++.h>
using namespace std;

int BinarySearch (vector<int> &arr, int target, int s, int e){

    sort(arr.begin(), arr.end());

    if(s>e) return -1; // Base case: Target not found

    int mid = s + (e-s)/2;

    if (arr[mid] == target){  //Target found
        return mid;
    }
    else if (arr[mid] >target){
        return BinarySearch(arr, target, s, mid-1); // Search Left
    }
    else if (arr[mid] <target){
        return BinarySearch(arr, target, mid+1, e); // Search Right
    }
}
 
 
int main() {

    vector<int> arr = {0,1,2,4,5,6,7};
    int target = 6;

    int result = BinarySearch(arr, target, 0, arr.size()-1);

    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found" << endl;

    return 0;
    

return 0;
}