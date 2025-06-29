#include<bits/stdc++.h>
using namespace std;
 
 
int main() {

//Initialisg 2d array

// 

// int arr[3][4]={{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};


//Create 2d array
int arr[3][4];
//Taking input rowise

// for(int row =0; row<3; row++){
//     for(int col=0; col<4; col++){
//         cin>>arr[row][col];
//     }
// }


//Taking input coulumnwise

for(int col =0; col<4; col++){
    for(int row=0; row<3; row++){
        cin>>arr[row][col];
    }
}
//print
for(int row =0; row<3; row++){
    for(int col=0; col<4; col++){
        cout<<arr[row][col]<<" ";
    }
    cout<<endl;
}

return 0;
}