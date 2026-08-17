#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    string s1 = "banana";
    string s2 = s1;
    string s3 = s1;
    string rev = "";
    
    //Method 1
    reverse(s1.begin(),s1.end());

    //Method 2
    int l= 0, r = s2.length()-1;
    while(l<r){
        swap(s2[l],s2[r]);
    }

    //Method 3
    for(int i = s3.length()-1; i>=0; i--){
        rev +=s3[i];
    }


    cout<<"using method 1:"<<s1;
    cout<<"using method 2:"<<s2;
    cout<<"using method 3:"<<rev;
    

    return 0;
}