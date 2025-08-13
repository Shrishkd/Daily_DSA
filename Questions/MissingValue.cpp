#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {

        //finding total sum
        int n = nums.size();
        int sum = n * (n+1)/2;

        cout<<"Size: "<< n <<endl;
        cout<<"Total Sum: " << sum << endl;;

        //given sum
        int cnt =0;
        for(int i =0; i<n; i++){
            cnt += nums[i];
        }

        cout<<" given sum: "<<cnt <<endl;;
        int missingvalue = sum - cnt;

        return missingvalue;
    }
};
 
 
int main() {

Solution obj;


vector<int> arr = {3,0,1};

int missingnumb = obj.missingNumber(arr);

cout<<"Missing value: "<<missingnumb;
 
return 0;
}