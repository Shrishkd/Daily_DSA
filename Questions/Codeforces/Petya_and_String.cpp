//112A
/*Little Petya loves presents. His mum bought him two strings of the same size for his birthday. The strings consist of uppercase and lowercase Latin letters. Now Petya wants to compare those two strings lexicographically. The letters' case does not matter, that is an uppercase letter is considered equivalent to the corresponding lowercase letter. Help Petya perform the comparison.

Input
Each of the first two lines contains a bought string. The strings' lengths range from 1 to 100 inclusive. It is guaranteed that the strings are of the same length and also consist of uppercase and lowercase Latin letters.

Output
If the first string is less than the second one, print "-1". If the second string is less than the first one, print "1". If the strings are equal, print "0". Note that the letters' case is not taken into consideration when the strings are compared.*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string word1;
    string word2;

    cout<<"Write Word1: ";
    cin>>word1;
    cout<<endl;
    cout<<"Write Word2: ";
    cin>>word2;
    cout<<endl;

    transform(word1.begin(), word1.end(), word1.begin(), :: tolower);
    transform(word2.begin(), word2.end(), word2.begin(), :: tolower);
    
    
    if(string(word1)> string(word2)){
        cout<<"WORD1 > WORD2 ";
    }
    else if (string(word1)< string(word2)){
        cout<<"WORD1 < WORD2 ";
    }
    else if (string(word1)== string(word2)){
        cout<<"WORD1 = WORD2 ";
    }
}