#include <bits/stdc++.h>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
        for (int i=0; i<nums.size(); i++){
            if (nums[i]== target){
                cout<< i;
                break;
            }
            else if(nums[i] < target && nums[i+1]> target){
                cout<< i;
                break;
            }
            else if(nums[i+1]< target){
                cout<< i+1;
                break;
            }
        }
        return 0;
    }   

int main(){

    vector<int> arr = {1,3,5,6};

    int target = 8;

    searchInsert(arr,target);


    return 0;
}