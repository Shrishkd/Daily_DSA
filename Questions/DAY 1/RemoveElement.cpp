#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeElement(vector <int> &nums, int val){
        nums.erase(remove(nums.begin(), nums.end(), val), nums.end());
        int k = nums.size();
        return nums, k;
    }

};

int main(){
    
    vector<int> arr = {2,2,7,8,0,3,7,5,6,7,9};
    int val  = 7;

    Solution obj;
    int k = obj.removeElement(arr, val);
    
    cout<<"Modified array: ";
    for(int i=0; i<k; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}