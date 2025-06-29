#include<iostream>
using namespace std;

class Solution{
    public:

    int singleDigit(int n){
        if(n==0) return 0;
        return 1+(n-1)%9;   // OP DIMAAG LAGANA PADEGA YE FORMULA NIKAALNE KO
    }
};
 
 
int main() {

Solution obj;

int numb;
cout<<"Enter the no.: ";
cin>>numb;

cout<<obj.singleDigit(numb)<<endl;

 
return 0;
}