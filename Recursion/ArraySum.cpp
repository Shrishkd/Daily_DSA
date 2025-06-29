#include<bits/stdc++.h>
using namespace std;

int Sumis(int arr[], int size){
    if (size==0){
        return 0;
    }
    if (size==1){
        return arr[0];
    }

    int remainingPart = Sumis(arr+1, size-1);
    int sum = arr[0] + remainingPart;
    return sum;

    
}
 
 
int main() {
 
int array[5] = {1,2,8,5,7};

int size = 5;

cout<<"Sum: "<<Sumis(array, size);


 
return 0;
}