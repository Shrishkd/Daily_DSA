#include <iostream>
using namespace std;

int main(){
     //int
     int x = 15;
     cout<<x<<endl;

    // range of int is -2147483648 to 2147483647 to use larger number we use....!
    // long
    long y = 30000000;
    cout<<y<<endl;

    //long long
    long long z = 30000000000;
    cout<<z<<endl;

    //float
    float a=15.65;
    cout<<a<<endl;
     
    //double
    double b=15;
    cout<<b<<endl;

    //string

    // string s1;
    // string s2;
    // cin>>s1>>s2;
    // cout<< s1 << " "<< s2;

    //to write all string in single line we use getline func.
    string str;
    getline(cin, str);
    cout<< str;

    //Char
    char ch;
    cin >> ch;
    cout << ch;

    return 0;
}