#include<bits/stdc++.h>
using namespace std;

void update1(int n){
    n++;
}

void update2(int& n){
    n++;
}
 
 
int main() {
 
 /*int i =5;

 int &j =i;

 cout<<i<<endl;
 cout<<j<<endl;
 i++;
 cout<<i<<endl;
 j++;
 cout<<j<<endl;
 cout<<i<<endl;*/

 int n =5;
 cout<<"Intial value of n = "<<n<<endl;

 update1(n);
 cout<<"Updating variable: Pass by Variable= "<<n<<endl; //Nothing will change as it update the copy of real variable not the actual variable itself;

 update2(n);
 cout<<"Updating variable: Pass by Refrence= "<<n<<endl;

 
return 0;
}