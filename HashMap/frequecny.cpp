#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

int main(){

    vector<int>arr = {1,5,4,1,4,2,3,2,4};

    unordered_map<int ,int> freq;

    for(int x : arr){
        freq[x]++;
    }

    //Traditonal approach:
    cout<<"TRADITIONAL WAY: "<<endl;
    for(const auto&pair: freq){
        cout<<"Number: "<<pair.first<<" Frequency : "<<pair.second<<endl;
    }

    //Modern approach
    // cout<<"MODERN WAY: "<<endl;
    // cout<<"Number"<<"frequency"<<endl;

    // for(const auto& [number , frequency]: freq){
    //     cout<<number<<frequency;
    // }

    return 0;
}