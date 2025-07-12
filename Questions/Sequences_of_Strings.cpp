#include <bits/stdc++.h>
using namespace std;

void solve(string str, string output, int index, vector<string> &ans ){
    //Base Case
    if(index>=str.length()){
        if (!output.empty())
            ans.push_back(output);
        return;
    }

    //Exclude
    solve(str, output, index+1, ans);

    //Include
    char element = str[index];
    output.push_back(element);
    solve(str, output, index+1, ans);

    output.pop_back();
}


vector<string> subsequence(string str){

    vector<string> ans;
    string output ="";
    int index =0;
    solve(str, output, index, ans);
    return ans;
}


int main(){

    string str = "abc";
    vector<string> result = subsequence(str);

    cout << "Subsequences:\n";
    for (const auto& s : result) {
        cout << s << endl;
    }

    return 0;
}