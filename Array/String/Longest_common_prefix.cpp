#include <bits/stdc++.h>
using namespace std;

//OPTIMISED
string longestCommonPrefix(vector<string>& arr, int n)
{
    if (arr.empty())
        return "";

    sort(arr.begin(), arr.end());

    string first = arr.front();
    string last = arr.back();

    int i = 0;

    while (i < first.size() &&
           i < last.size() &&
           first[i] == last[i])
    {
        i++;
    }

    return first.substr(0, i);
}

//BRUTE

// string longestCommonPrefix(vector<string>& arr, int n)
// {
//     // If array is empty
//     if (n == 0 || arr.empty())
//         return "";

//     string ans = "";

//     // Traverse every character of the first string
//     for (int i = 0; i < arr[0].size(); i++)
//     {
//         char ch = arr[0][i];
//         bool match = true;

//         // Compare this character with all other strings
//         for (int j = 1; j < n; j++)
//         {
//             // If current string is too short
//             // OR character does not match
//             if (arr[j].size() <= i || arr[j][i] != ch)
//             {
//                 match = false;
//                 break;
//             }
//         }

//         // If character didn't match everywhere, stop
//         if (!match)
//             break;

//         ans.push_back(ch);
//     }

//     return ans;
// }

int main()
{
    vector<string> arr = {"flower", "flow", "flight"};

    cout << longestCommonPrefix(arr, arr.size()) << endl;

    return 0;
}