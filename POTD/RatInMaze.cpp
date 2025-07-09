#include<bits/stdc++.h>
using namespace std;

class Solution {
    
  private:
    bool isSafe(int x, int y, int n, vector<vector<int>> &visited, vector<vector<int>> &m){
        if( (x>=0 && x<n) && (y>=0 && y<n) && visited[x][y] ==0 && m[x][y]==1){
            
            // Must satisfies 3 condition.
            // 1. Rat should stay inside the maze;  X and Y should me greater than 0 and 
            //smaller than size of maze thats is n 
            //2. Must not be already visited ; visited should be 0
            //3. There should be opening path; maze box value = 1
            return true;
        }
        else{
            return false;
        }
    }
    
    
    
    void solve(vector<vector<int>> &m, int n, vector<string> &ans, int x, int y, vector<vector<int>>& visited, string path){
        
        // you have reached x,y here
        
        //base case
        if(x==n-1 && y==n-1){
            ans.push_back(path);
            return;
        }
        visited[x][y] =1;
        
        // Rat can move in 4 direction i.e: DOWN, UP, RIGHT AND LEFT
        // DOWN : m(x+1, y)
        // UP : m(x-1, y)
        // RIGHT : m(x, y+1)
        // LEFT : m(x, y-1)
        
        // DOWN
        int newx = x+1;
        int newy = y;
        if(isSafe(newx, newy, n, visited, m)){
            path.push_back('D');
            solve(m,n,ans,newx, newy, visited, path);
            path.pop_back();
        }
        
        //UP
        newx = x-1;
        newy= y;
        if(isSafe(newx, newy, n, visited, m)){
            path.push_back('U');
            solve(m,n,ans, newx, newy, visited, path);
            path.pop_back();
        }
        
        //LEFT
        newx= x;
        newy=y-1;
        if(isSafe(newx, newy, n, visited, m)){
            path.push_back('L');
            solve(m, n, ans, newx, newy, visited, path);
            path.pop_back();
        }
        
        //RIGHT
        newx= x;
        newy = y+1;
        if(isSafe(newx, newy, n, visited, m)){
            path.push_back('R');
            solve(m,n,ans, newx, newy, visited, path);
            path.pop_back();
        }
        
        visited[x][y]=0;
    }
  public:
    vector<string> ratInMaze(vector<vector<int>>& maze) {
        vector<string> ans;
        
        int n = maze.size();
        
        if(maze[0][0] ==0){
            return ans;
        }
        
        int srcx =0;
        int srcy =0;
        
        vector<vector<int>> visited(n, vector<int>(n, 0));

        string path = "";
        
        solve(maze,n,ans,srcx,srcy, visited, path);
        
        sort(ans.begin(), ans.end());
        return ans;
    }
};

int main() {
    Solution obj;

    vector<vector<int>> maze = {
        {1, 1, 1, 0, 1},
        {1, 0, 1, 1, 1},
        {0, 0, 1, 1, 1},
        {1, 0, 0, 1, 1},
        {1, 0, 0, 0, 1}
    };

    vector<string> result = obj.ratInMaze(maze);

    if (result.empty()) {
        cout << "No path found" << endl;
    } else {
        for (const string& path : result) {
            cout << path << " ";
        }
        cout << endl;
    }

    return 0;
}