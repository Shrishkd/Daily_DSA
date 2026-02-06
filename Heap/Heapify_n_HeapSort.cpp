#include <iostream>
#include <queue>
using namespace std;


    void heapify(int arr[], int n, int i) {

        int largest = i;
        int left = 2*i;
        int right = 2*i+1;

        if( left <=n && arr[largest] < arr[left]) {
            largest = left;
        }
        if(right <=n && arr[largest] < arr[right]) {
            largest = right;
        }

        if(largest !=i){
            swap(arr[largest], arr[i]);
            heapify(arr, n, largest);
        }
    }


void heapSort(int arr[], int n){

    int size = n;
    
    while(size > 1){
        //step 1: swap
        swap(arr[size], arr[1]);
        size--;

        //step2
        heapify(arr, size, 1);
    }
}

int main(){


    int arr[6] = {-1, 54, 53, 55,52, 50};
    int n = 5;

    //heapCreation
    for (int i = n/2; i>0; i--){
        heapify(arr,n, i );
    }

    //printing
    cout<< "printing the array now"<<endl;
    for(int i = 1; i<=n; i++){
        cout<< arr[i] << " ";
    } cout<< endl;


    //heapsort
    heapSort(arr, n);
    cout<< "printing the sorted array"<<endl;
    for(int i = 1; i<=n; i++){
        cout<< arr[i] << " ";
    } cout<< endl;

    // STL
    cout<< "Using Priority Queue here"<<endl;

    //maxheap
    priority_queue<int> pq;
    pq.push(4);
    pq.push(2);
    pq.push(5);
    pq.push(6);
    pq.push(1);

    cout<< "element at Top " << pq.top() <<endl;
    cout<< "Size is " << pq.size() << endl;
    pq.pop();
    cout<< "element at Top " << pq.top() <<endl;
    cout<< "Size is " << pq.size() << endl;

    if(pq.empty()){
        cout<<"pq is empty"<<endl;
    }
    else{
        cout<<" pq is not empty";
    }cout<<endl;

    //minheap
    priority_queue<int, vector<int>, greater<int>> minheap;

    minheap.push(4);
    minheap.push(2);
    minheap.push(5);
    minheap.push(6);
    minheap.push(1);


    cout<< "element at Top " << minheap.top() <<endl;
    cout<< "Size is " << minheap.size() << endl;
    minheap.pop();
    cout<< "element at Top " << minheap.top() <<endl;
    cout<< "Size is " << minheap.size() << endl;
    if(minheap.empty()){
        cout<<"minheap is empty"<<endl;
    }
    else{
        cout<<" minheap is not empty";
    }
    return 0;
}