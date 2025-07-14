#include <iostream>
#include <string>
#include <set>

using namespace std;

int main(){

    string username;
    username.reserve(100);
    cin>>username;

    int count = 0;
    bool isUnique;

    //Using loop
    for (int i = 0; i < username.size(); i++) {
        isUnique = true;

        // Check if this character has appeared before
        for (int j = 0; j < i; j++) {
            if (username[i] == username[j]) {
                isUnique = false;
                break;
            }
        }

        if (isUnique) {
            count++;
        }
    }

    if (count% 2 == 0){
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";

    }

    // Using set

  /*   set<char> uniqueChars;

    for (char ch : username) {
        uniqueChars.insert(ch);  // set automatically stores only unique values
    }

    if (uniqueChars.size() % 2 == 0){
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }*/

    
    return 0;
}