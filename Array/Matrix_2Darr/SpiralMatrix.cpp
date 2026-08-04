#include <bits/stdc++.h> 
using namespace std;
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        
        // Define the boundaries
        int top = 0;
        int bottom = matrix.size() - 1;
        int left = 0;
        int right = matrix[0].size() - 1;

        while (top <= bottom && left <= right) {
            // Traverse from left to right along the top boundary
            for (int col = left; col <= right; col++) {
                ans.push_back(matrix[top][col]);
            }
            top++; // Move the top boundary down

            // Traverse from top to bottom along the right boundary
            for (int row = top; row <= bottom; row++) {
                ans.push_back(matrix[row][right]);
            }
            right--; // Move the right boundary left

            // Traverse from right to left along the bottom boundary (if still valid)
            if (top <= bottom) {
                for (int col = right; col >= left; col--) {
                    ans.push_back(matrix[bottom][col]);
                }
                bottom--; // Move the bottom boundary up
            }

            // Traverse from bottom to top along the left boundary (if still valid)
            if (left <= right) {
                for (int row = bottom; row >= top; row--) {
                    ans.push_back(matrix[row][left]);
                }
                left++; // Move the left boundary right
            }
        }
        
        return ans;
    }
};
