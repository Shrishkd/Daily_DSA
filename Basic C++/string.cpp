#include <iostream>
using namespace std;

int main(){
    string s="Shrish";

    int len = s.size();

    cout<<"Total number of character in Shrish is: "<<len<<endl;
    cout<<"Last character of Shrish is: "<<s[len-1]<<endl;
    cout<<"4th character of Shrish is: "<< s[3]<<endl;

    s[len-1]='a';    // a is charcter so it is inside the single inverted coloum ('') rather than double ("")
    s[len-2]='j';   // same is with j
    cout<<s;
    return 0;
}

