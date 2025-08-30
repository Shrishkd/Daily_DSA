#include <iostream>
#include <queue>
using namespace std;

int main(){

    //Create Queue

    queue<int>q;

    q.push(18);
    q.push(21);
    q.push(30);

    cout<<"Size of Queue is: " <<q.size()<<endl; 
    cout<<"Front element is: " <<q.front()<<endl;
    cout<<"Element at last is: "<<q.back()<<endl;

    q.pop();
    cout<<"Size of Queue is: " <<q.size()<<endl;
    cout<<"Front element is: " <<q.front()<<endl;

    if(q.empty()){
        cout<<"Queue is empty"<<endl;
    }
    else{
        cout<<"Queue is not empty"<<endl;
    }



    
    return 0;
}