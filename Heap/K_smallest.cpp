#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:

    int kthSmallest(vector<int> &arr, int k){

// we used max heap (priority_queue<int>) to find the smallest element, similarly we use min heap to find the largest element 


        priority_queue<int> pq;

        //step1
        for(int i=0; i<k; i++){
            pq.push(arr[i]);
        }

        int r = arr.size()-1;

        //step2
        for(int i = k ; i<=r; i++){
            if(arr[i]< pq.top()){
                pq.pop();
                pq.push(arr[i]);
            }
        }

        int ans = pq.top();
        return ans;
    }
};
 
 
int main() {
    Solution obj;
    vector<int> arr = {40,5,8,12,20};
    cout<<obj.kthSmallest(arr,4);
 
return 0;
}