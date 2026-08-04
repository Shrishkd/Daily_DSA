#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());

        vector<vector<int>> ans;

        for(int i=0; i<n; i++){

            int left = i+1;
            int right = n-1;

            if(i>0 && nums[i] == nums[i-1]) continue;

            while(left < right){

                int sum = nums[i] + nums[left] + nums[right];
                if(sum == 0){
                    ans.push_back({nums[i], nums[left], nums[right]});
                    left++;
                    right--;

                    while(left < right  && nums[left] == nums[left-1]) left++;
                    while(left < right  && nums[right] == nums[right+1]) right--;
                }
                else if (sum < 0) left++;
                else right--;
            }
        }
        return ans;
    }
};

int main(){
    Solution obj;

    vector<int> nums = {-1, 0, 1 , 2, -1, -4};

    vector<vector<int>> res = obj.threeSum(nums);

        for (const auto &triplet : res) {
        cout << "[ ";
        for (int num : triplet) {
            cout << num << " ";
        }
        cout << "]" << endl;
    }

}