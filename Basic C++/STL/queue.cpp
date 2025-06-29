#include <iostream>
#include <queue>

using namespace std;

int main(){
    queue<string> q;

    q.push("Mr.");
    q.push("SHRISH");
    q.push(" Das");

    cout<<"Size Before Pop: "<<q.size()<<endl;

    cout<<"First Element: "<<q.front()<<endl;

    cout<<"First Element after pop: "<<q.front()<<endl;

    cout<<"Size after pop: "<<q.size()<<endl;
    

}