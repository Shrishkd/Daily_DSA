// Problem: Pair With Sum Closest to Target

// Given a sorted array of integers and a target integer, find the two elements whose sum has the minimum absolute difference from the target.

#include<bits/stdc++.h>
using namespace std;

pair <int,int> solution(int n, vector<int>& arr, int target){
    
    int minDiff = INT_MAX;
    int elem1 = -1;
    int elem2 = -1;
    // for(int i = 0; i<n-1; i++){
    //     for(int j = i+1; j<n; j++){
    //         int ans = arr[i]+arr[j];
    //         int diff = abs(target-ans);
    //         if(diff<minDiff){
    //             minDiff =  diff;
    //             elem1 = arr[i];
    //             elem2 = arr[j];
    //         }
    //     }
    // }

    int left = 0;
    int right = n-1;

    while(left<right){
        int sum = arr[left] + arr[right];
        int diff = abs(target-sum);

        if(diff < minDiff){
            minDiff = diff;
            elem1 = arr[left];
            elem2 = arr[right];
        }
        if(sum<target) left++;
    
        else if(sum>target){
            right--;
        }
        else{
            return {arr[left], arr[right]};
        }
    }

    return {elem1, elem2};

}
int main(){

    int n;
    cout<<"Enter size: "; /* No need of this*/
    cin>>n;
    
    vector<int> arr(n);

    cout<<"Enter array: ";  /* No need of this*/
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<endl;
    
    int target;
    cout<<"Enter target: "; /* No need of this*/
    cin>> target;

    pair<int, int> answer = solution(n, arr , target);
    cout<<answer.first<<" "<<answer.second;

    return 0;
}