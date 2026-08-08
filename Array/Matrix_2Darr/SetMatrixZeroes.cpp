#include<iostream>
#include<vector>
using namespace std;

class Solution{
public:
    void setZeroes(vector<vector<int>> & matrix){

        //Brute Force
        // vector<vector<int>> index;

        // int row = matrix.size();
        // int col = matrix[0].size();
        // int rowIndex = 0;
        // while(rowIndex<row){
        //     int colIndex = col-1;
        //     while(colIndex>=0){
        //         if(matrix[rowIndex][colIndex]==0){
        //             index.push_back({rowIndex,colIndex});
        //         }
        //         colIndex--;
        //     }
        //     rowIndex++;
        // }
        
        // for(int k = 0; k < index.size(); k++){
        //     int r = index[k][0];
        //     int c = index[k][1];

        //     // Make entire row zero
        //     for(int j = 0; j < col; j++)
        //     {
        //         matrix[r][j] = 0;
        //     }

        //     // Make entire column zero
        //     for(int i = 0; i < row; i++)
        //     {
        //         matrix[i][c] = 0;
        //     }
        // }

        //Better Approach
        int n = matrix.size();
        int m = matrix[0].size();
        vector<int>row (n,0);
        vector<int>col (m,0);


        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(matrix[i][j]==0){
                    row[i]=1;
                    col[j]=1;
                }
            }
        }

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(row[i]==1|| col[j]==1){
                    matrix[i][j]=0;
                }
            }
        }

        for(int k =0; k<n;k++){
            for(int l=0; l<m; l++){
                cout<<matrix[k][l]<<" ";
            }
            cout<<endl;
        }
    }

};

int main(){

    Solution obj;
    vector<vector<int>> matrix = {
    {1,1,1}, 
    {1,0,1}, 
    {0,1,1}};
    obj.setZeroes(matrix);

}