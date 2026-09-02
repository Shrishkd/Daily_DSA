#include<iostream>
#include<vector>
#include<unordered_map>
#include<queue>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        vector<int> ans;
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        unordered_map<int, int> mp;

        for(int freq:nums){
            mp[freq]++;
        }

        for(const auto&pair: mp){
                int num = pair.first;
                int freq = pair.second;
                pq.push({freq, num});
                if(pq.size()>k){
                    pq.pop();
            }
        }

        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }

        return ans;
    }
};

int main(){

    Solution obj;

    vector<int> nums {1,1,1,2,2,3};
    int k = 2;

    vector<int>ans = obj.topKFrequent(nums, k);

    for(int x: ans){
        ans.push_back(ans[x]);
        cout<<ans[x]<<" ";
    }


    


    return 0;
}