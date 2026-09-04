#include<iostream>
#include<vector>
#include<climits>
using namespace std;

class Solution{
public:
    //Opitmal Approach
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

// Brute Force:

int maxProd(vector<int>&nums){

    
    if(nums.size()==1){
        return nums[0];
    }

    int product = INT_MIN;

    for(int i = 0; i<nums.size(); i++ ){

        int prod = nums[i];

        if(i==nums.size()-1){
            product = max(product, prod);
        }else{
            for(int j = i+1; j<nums.size(); j++){
            
                product = max(product, prod);

                prod *= nums[j];

                product = max(product, prod);

            }
        }

    }
    return product;

}



int main(){

    vector<int> nums = {1,0,-5,2,3,-8,-9};

    Solution obj;

    int ans1 = obj.maxProduct(nums);

    int ans2 = maxProd(nums);

    cout<<"OPtimal: "<<ans1<<endl;

    cout<<"Brute: "<<ans2<<endl;

    return 0;
}
