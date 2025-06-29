#include<bits/stdc++.h>
using namespace std;
 
 
int main() {
 
 char ch[5] = "abcd";
 cout<<ch<<endl;  // returns entire array rather than address of first memory block  

 char *c = &ch[0];
 cout<<c<<endl;   // returns entire array rather than address of first memory block  

return 0;
}