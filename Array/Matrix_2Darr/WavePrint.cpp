#include <bits/stdc++.h> 
using namespace std;
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    
    vector<int> ans;

    for(int col=0; col<mCols; col++ ){
        if(col&1){
            for(int row=nRows-1; row>=0; row--){
                ans.push_back(arr[row][col]);
            }
        }
        else{
            for(int row=0; row<nRows; row++){
                ans.push_back(arr[row][col]);
            }
        }
        
    }
    return ans;
}

int main(){

    vector<vector<int>> arr {{1,11,111,1111}, {2,22,222,2222}, {3,33,333,3333}};

    int nRows = 3;
    int nCols = 4;

    vector<int> result =  wavePrint(arr, nRows, nCols);
    
    cout << "Wave Traversal: ";
    for (int num : result)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;

}