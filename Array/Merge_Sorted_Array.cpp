#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n){

    int i = m-1;
    int j = n-1;
    int k = m+n-1;

    while( i>=0 && j>=0){

        if(nums1[i] > nums2[j]){
            nums1[k--] = nums1[i--];
        }
        else{
            nums1[k--] = nums2[j--];
        }
    }

    while(j>=0){
        nums1[k--] = nums2[j--];
    }

}

int main(){

    vector<int> arr1 = {1,2,3,0,0,0};
    vector<int> arr2 = {2,5,6};
    int len1 = 3;
    int len2 = 3;


cout << "Array1: ";
for (int num : arr1) cout << num << " ";
cout << endl;

cout << "Array2: ";
for (int num : arr2) cout << num << " ";
cout << endl;

merge(arr1, len1, arr2, len2);

cout << "Final Sorted Array: ";
for (int num : arr1) cout << num << " ";
cout << endl;


}