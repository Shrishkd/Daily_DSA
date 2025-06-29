#include <bits/stdc++.h>
using namespace std;

void pattern1(int n){
    for (int i =0; i<n; i++){
        for (int j=0; j<n; j++){
            cout<<"*";
        }
    
    cout<<endl;
    }
}
void pattern2(int n){
    
    for (int i =0; i<n; i++){
        for (int j=0; j<=i; j++){
            cout<<"*";
        }
    
    cout<<endl;
    }
}
void pattern3(int n){
    for (int i =1; i<n+1; i++){
        for (int j=0; j<i; j++){
            cout<<i;

        }
    
    cout<<endl;
    }
}
void pattern4(int n){
    for (int i =1; i<n+1; i++){
        for (int j=1; j<=i; j++){
            cout<< j << " ";
        }
    
    cout<<endl;
    }
}
void pattern5(int n){
    for (int i =1; i<=n; i++){
        for (int j=0; j<n-i+1; j++){
            cout<< "* ";
        }
    
    cout<<endl;
    }
}
/* 
//METHOD 2 for pattern 5
void pattern5(int n){
    for (int i =n; i>=1; i--){
        for (int j=1; j<=i; j++){
            cout<< "* ";
        }
    
    cout<<endl;
    }
}*/
void pattern6(int n){
    for (int i=1; i<=n; i++ ){
        for (int j=1; j<=n-i+1; j++){
            cout<<j;        
            }
            cout<<endl;
    }
    
}
// void pattern6ii(int n){
//     for (int i=n; i<=1; i--){
//         for (int j=0; j<=i; j++){
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }
void pattern7(int n){
    for (int i=1; i<=n; i++){
        //space
        for(int j=0; j<(n-i); j++){
            cout<<" ";
        }
        //star
        for (int j=0; j<(2*i-1); j++){
            cout<<"*";
        }
        //space
        for(int j=0; j<(n-i); j++){
            cout<<" ";
        }
    cout<<endl;
    }
}
void pattern8(int n){
    for (int i=1; i<=n; i++){
        //space
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        //star
        for (int j=0; j<2*n-2*i+1; j++){
            cout<<"*";
        }
        //space
        for(int j=0; j<i; j++){
            cout<<" ";
        }
    cout<<endl;
    }
}
void pattern9(int n){
    pattern7(n);
    pattern8(n);
}
void pattern12(int n){
    
    for (int i=1; i<=n; i++){
        int space = (2*n) - (2*i);  //Striver method: int space = 2*(n-1)
        //number
        for (int j=1; j<=i; j++){
            cout<<j;
        }
        //spaces
        for (int j=0; j<space; j++){
            cout<<" ";
        }
        //numbers
        for (int j=i; j>=1; j--){
            cout<<j;
        }
    cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter the no. of line you want to print: ";
    cin>>n;
    pattern9(n);
return 0;
}