#include <iostream>
#include <unordered_map>
using namespace std;

int longestSubstring(string s, int k) {
    unordered_map<char, int> freq;
    int left = 0, ans = 0;

    for (int right = 0; right < s.size(); right++) {

        if (s[right] == 'a' || s[right] == 'e' ||
            s[right] == 'i' || s[right] == 'o' ||
            s[right] == 'u') {
            freq[s[right]]++;
        }

        while (freq.size() > k) {
            if (freq.count(s[left])) {
                freq[s[left]]--;

                if (freq[s[left]] == 0)
                    freq.erase(s[left]);
            }

            left++;
        }

        if (freq.size() == k)
            ans = max(ans, right - left + 1);
    }

    return ans;
}

int main() {
    string s = "artyebui";
    int k = 2;

    cout << longestSubstring(s, k);

    return 0;
}