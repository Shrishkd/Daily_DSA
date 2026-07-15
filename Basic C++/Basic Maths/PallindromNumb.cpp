#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    bool isPallindrom(int x){
        vector<int> arr;

        int temp = x;

        if(temp ==0){
            arr.push_back(0);
        }

        while(temp>0){
            arr.push_back(temp%10);
            temp/=10;
        }

        int l = 0;
        int r = arr.size()-1;

        while(l<r){
            if(arr[l]!=arr[r]){
                return false;
            }
            l++;
            r--;
        }

    return true;    
    }

};

int main(){

    Solution obj;

    int x = 121;

    if (obj.isPallindrom(x)) cout<<"true";
    else cout<<"false";
    
    return 0;
}