#include <bits/stdc++.h>
using namespace std;

/*
Take the day no. and print the corresponding day 
for 1 print Monday
for 2 print Tuesdat and so on for 7 print Sunday
*/

int main(){
    cout<<"Enter number: ";
    int day;
    cin>>day;
    switch(day){
        case 1 : 
            cout << "MONDAY ";
            break;
        case 2: 
            cout << "TUESDAY ";
            break;
        case 3: 
            cout << "WEDNESDAY ";
            break;
        case 4: 
            cout << "THURSDAY ";
            break;
        case 5: 
            cout << "FRIDAY ";
            break;
        case 6: 
            cout << "SATURDAY ";
            break;
        case 7: 
            cout << "SUNDAY ";
            break;
        default:
            cout<<"INVALID NUMBER";

    }
return 0;
}
