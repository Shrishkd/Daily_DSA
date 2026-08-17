#include <iostream>
#include <unordered_map>
using namespace std;

int main(){

    string s = "aoeiicbubd";
    int vowel = 0;
    int cons = 0; 

    // unordered_map<char, int> mp;   
    // for(char c : s){
    //     mp[c]++;
    // }

    // for(const auto&pair : mp){
    //     if(pair.first == 'a' ||pair.first == 'e' || pair.first == 'i' ||pair.first == 'o' ||pair.first == 'u' ){
    //         vowel++;
    //     }else{
    //         cons++;
    //     }
    // }


    for(char c : s){
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' ||c == 'u'  ) vowel++;
        else cons++;
    }

    cout<<"Number of vowel: " <<vowel<<endl;
    cout<< "Number of Consonant: "<<cons<<endl;

    return 0;
}