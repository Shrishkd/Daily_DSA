#include<iostream>
using namespace std;

int getMin(int num[], int n){
    int mini = num[0];

    for(int i=0; i<n; i++){

        //mini =min(mini, num[i]);        :- Inbuilt function min to find minimum number

        if(num[i]<mini){
            mini=num[i];
        }

    }
    return mini;
}

int getMax(int num[], int n){
    int maxi = num[0];

    for(int i=0; i<n; i++){

        //maxi =max(maxi, num[i]);        :- Inbuilt function max to find maximum number

        if(num[i]>maxi){
            maxi=num[i];
        }  
    }
    return maxi;
}
 
 
int main() {

    cout<<"Enter the size of array followed by its element: ";

    int size;
    cin>>size;

    int num[100];

    //taking input in array
    for(int i=0; i<size; i++){
        cin>>num[i];
    }

cout<<"Maximum element : "<<getMax(num, size)<<endl;
cout<<"Minimum element : "<<getMin(num, size)<<endl;
 
 return 0;
}