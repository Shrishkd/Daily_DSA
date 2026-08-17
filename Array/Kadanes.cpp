#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int maximumSum(const vector<int>& nums) {
    int maxi = INT_MIN;
    int sum = 0;

    int start = 0;
    int ansStart = -1;
    int ansEnd = -1;

    for (int i = 0; i < nums.size(); i++) {
        // When sum is 0, start a new potential subarray at index i
        if (sum == 0) {
            start = i;
        }

        sum += nums[i];

        // Update maximum sum and record the subarray boundaries
        if (sum > maxi) {
            maxi = sum;
            ansStart = start;
            ansEnd = i;
        }

        // Reset sum if it drops below 0
        if (sum < 0) {
            sum = 0;
        }
    }

    // Print the elements of the maximum sum subarray
    cout << "Maximum Subarray: [ ";
    for (int i = ansStart; i <= ansEnd; i++) {
        cout << nums[i] << " ";
    }
    cout << "]\n";

    return maxi;
}

int main() {
    vector<int> numb {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    int maxSum = maximumSum(numb);
    cout << "Maximum Sum: " << maxSum << endl;

    return 0;
}