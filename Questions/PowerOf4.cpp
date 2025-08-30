#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPowerOfFour(int n) {

        // ---------- Approach 1: Recursion ----------
        // if (n == 1) return true;
        // if (n <= 0 || n % 4 != 0) return false;
        // return isPowerOfFour(n / 4);

        // ---------- Approach 2: Loop (divide by 4) ----------
        // if (n <= 0) return false;
        // while (n % 4 == 0) {
        //     n = n / 4;
        // }
        // return n == 1;

        // ---------- Approach 3: Multiplication loop ----------
        for (long long i = 1; i <= n; i *= 4) {
            if (i == n) return true;
        }
        return false;
    }
};

int main() {
    Solution obj;

    vector<int> testCases = {1, 4, 16, 5, 64, 256, -4, 0};

    cout << "Testing Power of Four Function:\n";
    for (int num : testCases) {
        cout << "n = " << num << " :  "
             << (obj.isPowerOfFour(num) ? "true" : "false") << "\n";
    }

    return 0;
}
