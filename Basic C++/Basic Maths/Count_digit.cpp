#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
    int evenlyDivides(long N) {
        int cnt = 0;
        long n = abs(N);  // Take absolute value to handle negative numbers
        int lastdigit = 0;
        
        while (n > 0) {
            lastdigit = n % 10;  // Extract the last digit
            
            if (lastdigit != 0 && N % lastdigit == 0) {
                cnt++;  // Increment count if digit divides N evenly
            }
            
            n = n / 10;  // Remove the last digit
        }
        
        return cnt;
    }
};

int main() {
    long N;
    cout << "Input Number: ";
    cin >> N;

    Solution obj;
    cout << obj.evenlyDivides(N) << endl;
    return 0;
}
