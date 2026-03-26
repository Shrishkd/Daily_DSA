#include <bits/stdc++.h>
using namespace std;

vector<int> bfsTraversal(int n, vector<vector<int>> &adj) {
    vector<int> result;           // To store BFS order
    vector<bool> visited(n, false); // Visited array
    queue<int> q;

    // Start from node 0
    q.push(0);
    visited[0] = true;

    while (!q.empty()) {
        int node = q.front();
        q.pop();

        result.push_back(node);

        // Traverse all neighbors
        for (int neighbor : adj[node]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }

    return result;
}

int main() {
    vector<vector<int>> adj = {
        {1, 2, 3},
        {4},
        {5},
        {},
        {},
        {}
    };

    int n = adj.size();

    vector<int> ans = bfsTraversal(n, adj);

    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}