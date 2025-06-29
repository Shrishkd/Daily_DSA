#include<iostream>
using namespace std;
    int getLength(char name[]){
    int count=0;
    for (int i=0; name[i] !='\0'; i++){
        count++;
    }
    return count;
}

void reverseName(char name[], int n){
    int i=0;
    int j=n-1;
    while(i<j){
        swap(name[i], name[j]);
        i++;
        j--;
    }
}
  
int main() {

char name[20];

cout<<"Enter your name: ";
cin>>name;

cout<<"Your name is: ";
cout<<name<<endl;

cout<<"Length of name is: " << getLength(name)<<endl;

int len = getLength(name);

reverseName(name, len);
cout<<"Reverse of the name is: " << name;

return 0;
}