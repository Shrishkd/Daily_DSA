#include<iostream>
#include<array>
#include<vector>
using namespace std;
 
 
int main() {

//Method 1
array<int,5> arr={1,4,7,9,6};
cout<<"Size of the first array is: " << arr.size()<<endl;

for (int i =0; i<arr.size(); i++){
    cout<<i<<": "<<arr[i]<<endl;
}
 //Vector size
vector<int>  brr = {1,2,5,7};
cout<<"Size of the vector: "<<brr.size()<<endl;


//Method 2
// int arr2[]={1,7,9};
// size_t len = size(arr2);
// cout<<"Size of the second array is: "<<len<<endl;

 
return 0;
}