#include <iostream>
using namespace std;

int main(){
    int marks;
    cout<<"ENTER YOUR MARKS: "<<endl;
    cin>>marks;

        if (marks<0 or marks>100){
        cout<<"INVALID MARKS, PLEASE ENTER CORRECT MARKS";
        }

    else if (marks>=95 and marks<=100){
        cout<<"YOUR GRADE: S";
    }

    else if (marks>=80 and marks<95){
        cout<<"YOUR GARDE: A";
    }

    else if (marks>=60 and marks <80){
        cout<<"YOUR GRADE: B";
    }

    else if (marks>=50 and marks<60){
        cout<<"YOUR GARDE IS: C";
    }

    else if (marks>=40 and marks<50){
        cout<<"YOUR GRADE IS: D";
    }

    else if (marks>=30 and marks<40){
        cout<<"YOUR GRADE IS: E";
    }

    else if (marks>=0 && marks<30){
        cout<<"FAIL";
        }

return 0;
};
