#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> arr = {1,2,3,2,1};

    int ans =0;

    for(int x:arr){
        ans ^=x;
    }
    cout<<ans;

    return 0;
}