#include<bits/stdc++.h>
using namespace std;
bool IsPresnt(int arr[][4], int target, int row, int col){

    for(int row=0; row<3; row++){
        for(int col=0; col<4; col++){
            if(arr[row][col]==target){
                return 1;
            }
        }
    }
    return 0;

}
 
 
int main() {
 
int arr[3][4];

for(int row =0; row<3; row++){
    for(int col=0; col<4; col++){
        cin>>arr[row][col];
    }
}

for(int row =0; row<3; row++){
    for(int col=0; col<4; col++){
        cout<<arr[row][col]<<" ";
    }
    cout<<endl;
}

cout<<"Enter the Element to search" << endl;
int target;
cin>>target;

if(IsPresnt(arr, target, 3 ,4)){
    cout<<"Element found";
}
else{
    cout<<"Elemnt Not found";
}
return 0;
}