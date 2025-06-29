#include<iostream>
using namespace std;

bool search(int arr[], int size, int key){
    for (int i=0; i<size; i++){
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;
}
 
 
int main() {
    int arr[10]={2,7,-4,74,4,14,23,12,9,25};

    cout<<"Enter the element to search for: ";
    int key;
    cin>>key;

    bool found = search(arr, 10, key);

    if (found){
        cout<<"Element is present in array"<<endl;
    }

    else{
        cout<<"Element is not present"<<endl;

    }
 
 return 0;
}