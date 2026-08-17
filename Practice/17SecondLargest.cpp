#include<iostream>
#include<algorithm>
#include<vector>
#include<climits>
using namespace std;

int getSecond(vector<int>arr){

    //Method 1

    int n = arr.size();

    sort(arr.begin(), arr.end());

    for(int i = n-2; i>=0; i--){
        if (arr[i]!=arr[n-1]){
            return arr[i];
        }
    }
    return -1;

    //Method 2 

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for(int numb : arr){
        if(arr[numb]>largest){
            secondLargest = largest;
            largest = numb;
        }
        else if(arr[numb]<largest && arr[numb]>secondLargest){
            secondLargest = arr[numb];
        }
    }
    return secondLargest;

}

int main(){


}