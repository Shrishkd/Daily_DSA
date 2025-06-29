#include<bits/stdc++.h>
using namespace std;
 
 
int main() {

    vector<int> arr;
    int numb = 10;
    while (numb>=1)
    {
        int bin = numb%2;
        numb /=2;
        arr.push_back(bin);

    }

    int s=0;
    int e = arr.size()-1;

    bool isPalindrome= true;
    while(s<e){
        cout<<"first index: "<<arr[s]<<endl;
        cout<<"Last Index: "<< arr[e-1]<<endl;

        if(arr[s] != arr[e]){
            isPalindrome = false;
            break;
        }
        s++;
        e--;
    }
    if (isPalindrome){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not Pallindrome";
    }

return 0;
}