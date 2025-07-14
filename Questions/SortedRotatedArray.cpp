#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int s = 0;                         // Start pointer
        int e = nums.size() - 1;           // End pointer

        while (s <= e) {
            int mid = s + (e - s) / 2;     // Calculate mid safely

            if (nums[mid] == target)       // If target is found at mid
                return mid;

            // Check if the left half [s...mid] is sorted
            if (nums[s] <= nums[mid]) {

                // If target lies within the sorted left half
                if (nums[s] <= target && target < nums[mid]) {
                    e = mid - 1;           // Narrow search to left half
                } else {
                    s = mid + 1;           // Otherwise, search right half
                }

            } 
            // Else, the right half [mid...e] must be sorted
            else {

                // If target lies within the sorted right half
                if (nums[mid] < target && target <= nums[e]) {
                    s = mid + 1;           // Narrow search to right half
                } else {
                    e = mid - 1;           // Otherwise, search left half
                }
            }
        }

        return -1; // If target not found
    }
};

int main() {
    Solution obj;

    vector<int> arr = {4, 5, 6, 7, 0, 1, 2};
    int target = 3;

    int result = obj.search(arr, target);

    if (result != -1){
        cout<<" Element found at index: "<<result;
    }
    else{
        cout<<"Element not found"<<endl;
    }
    return 0;
}


