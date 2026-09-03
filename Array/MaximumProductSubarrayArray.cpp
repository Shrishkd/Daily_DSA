#include<iostream>
#include<vector>
#include<climits>
using namespace std;

class Solution{
public:

    int maxProduct(vector<int>&nums){

        int n = nums.size();
        int ans = INT_MIN;

        int pref = 1, suff = 1;

        for(int i = 0; i<n; i++){

            if(pref==0) pref=1;

            if(suff==0) suff=1;

            pref*=nums[i];

            suff*=nums[n-i-1];

            ans = max(ans, max(pref, suff));
        }
        return ans;
    }
};

int main(){

    vector<int> nums = {1,0,-5,2,3,-8,-9};

    Solution obj;

    int ans = obj.maxProduct(nums);

    cout<<ans;

    return ans;
}
