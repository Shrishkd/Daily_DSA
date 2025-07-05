#include <iostream>
#include <vector>
using namespace std;

vector<int> plusOne(vector<int>& digits) {
    int n = digits.size();

    // Traverse from the last digit to the first
    for (int i = n - 1; i >= 0; i--) {
        if (digits[i] < 9) {
            digits[i]++;      // Just add 1 and return
            return digits;
        }
        digits[i] = 0;        // Set current digit to 0 and carry over
    }

    // If all digits were 9, we reach here. Ex: [9,9] => [0,0]
    // So we insert 1 at the beginning: [1,0,0]
    digits.insert(digits.begin(), 1);
    return digits;
}

int main() {
    vector<int> digits = {9, 9, 9};
    vector<int> result = plusOne(digits);
    
    for (int digit : result)
        cout << digit << " ";
    
    return 0;
}
