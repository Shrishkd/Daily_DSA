#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string compareNM(int n, int m){
        
        if (n < m) {
            return "lesser";
        }
        else if (n == m) {
            return "equal";
        }
        else  {
            return "greater";
        }
    }
    
};
int main(){
    Solution sol;
    int n , m;
    cin>>n>>m;
    cout<<sol.compareNM(n,m)<<endl;
}