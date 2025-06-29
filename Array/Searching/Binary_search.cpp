    #include<bits/stdc++.h>
    using namespace std;

    int search(vector<int>& arr, int target){

        sort(arr.begin(), arr.end());

        int start=0;
        int end=arr.size()-1;
        int mid;
        while(start<=end){
            mid= start + (end-start)/2;

            if(arr[mid]==target){
                return mid;
            }
            else if(arr[mid]>target){
                end = mid-1;
            }
            else{
                start = mid+1;
            }     
        }
        return -1;
    }
    
    int main() {
        
        int size;
        cout<<"Enter the size of array: ";
        cin>>size;

        vector<int> arr(size);

        cout<<"Now Enter "<< size << " Element one by one: ";

        for(int i=0; i<size; i++){
            cin>>arr[i];
        }

        cout<<"Entered array is: ";
        for(const int& elem:arr){
            cout<<elem<< " ";
        }
        cout<<endl;

        int target;
        cout<<"Enter the element you want to find:  ";
        cin>>target;

        int ans = search(arr, target);

        if(ans!=-1){
            cout<<"After sorting element " << target << " is found at index " << ans<<endl;
        }
        else{
            cout<<"Element " << target <<" is not found in array"<<endl;
        }

    
    return 0;
    }