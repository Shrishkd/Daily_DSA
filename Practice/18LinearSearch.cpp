#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> arr = {1,1,8,6,7,5,15};
    int key = 4;

    for(int i = 0; i< arr.size(); i++){
        if(arr[i] == key){
            cout<<i;
        }
    }



return 0;

}