// Count Vowels and Consonants

#include <iostream>
#include <string>
using namespace std;

int main() {
    string word = "programming";

    int vowel = 0;
    int consonant = 0;

    // Loop through each character in the string directly
    for (char c : word) {
        // Ensure we only look at alphabetical characters
        if (c >= 'a' && c <= 'z') { 
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                vowel++;
            } else {
                consonant++;
            }
        }
    }

    cout << "Vowel: " << vowel << endl;
    cout << "Consonant: " << consonant << endl;

    return 0;
}



// Method 2:
/*#include <iostream>
#include <vector>
using namespace std;

int main(){

    string word = "programming";

    vector<int> freq(26,0);

    for(char c:word){
        freq [c - 'a']++;
    }

    int vowel = 0;
    int consonant = 0;

    for (int i = 0; i < 26; i++) {
    if (freq[i] > 0) { // Only care if the letter actually appeared
        // Check if the CURRENT index 'i' corresponds to a, e, i, o, or u
        if (i == 0 || i == 4 || i == 8 || i == 14 || i == 20) {
            vowel += freq[i]; // Add the actual count of this vowel
        } else {
            consonant += freq[i]; // Add the actual count of this consonant
        }
    }
}

    cout<<"Vowel: "<<vowel<<endl;
    cout<<"Consonant: "<<consonant<<endl;

    return 0;
}*/
