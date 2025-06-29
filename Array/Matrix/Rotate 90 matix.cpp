#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        // Take transpose of the matrix
        for(int i=0; i<n; i++){
            for (int j= i+1; j<n; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        // Swapping the column

        int j= 0,  top =0, bottom=n-1;
        while(j<n){
            while(top<bottom){
                swap(matrix[j][top], matrix[j][bottom]);
                top++;
                bottom++;
            }
        j++;
        }
    }
    
};

    void printMatrix(const vector<vector<int>>& matrix) {
        for (const auto& row : matrix) {
            for (int val : row) {
                cout << val << " ";
            }
            cout << endl;
        }
    }   
 
int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    Solution solution;
    solution.rotate(matrix);

    cout << "Rotated Matrix:" << endl;
    printMatrix(matrix);

    return 0;
}