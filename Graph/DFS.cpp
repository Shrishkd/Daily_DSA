#include <bits/stdc++.h>
using namespace std;

// DFS function
void dfs(int node,
         unordered_map<int, bool> &visited,
         unordered_map<int, list<int>> &adj,
         vector<int> &component) {

    visited[node] = true;
    component.push_back(node);

    for (auto neighbor : adj[node]) {
        if (!visited[neighbor]) {
            dfs(neighbor, visited, adj, component);
        }
    }
}

// Main DFS function
vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges) {

    // Step 1: Create adjacency list
    unordered_map<int, list<int>> adj;

    for (int i = 0; i < E; i++) {
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
        adj[v].push_back(u); // undirected graph
    }

    // Step 2: visited map
    unordered_map<int, bool> visited;

    // Step 3: answer
    vector<vector<int>> ans;

    // Step 4: handle disconnected graph
    for (int i = 0; i < V; i++) {
        if (!visited[i]) {
            vector<int> component;
            dfs(i, visited, adj, component);
            ans.push_back(component);
        }
    }

    return ans;
}

// Driver code (main function)
int main() {
    int V, E;
    cout << "Enter number of vertices and edges: ";
    cin >> V >> E;

    vector<vector<int>> edges(E, vector<int>(2));

    cout << "Enter edges (u v):\n";
    for (int i = 0; i < E; i++) {
        cin >> edges[i][0] >> edges[i][1];
    }

    vector<vector<int>> result = depthFirstSearch(V, E, edges);

    cout << "\nDFS Traversal (Components):\n";
    for (auto component : result) {
        for (auto node : component) {
            cout << node << " ";
        }
        cout << endl;
    }

    return 0;
}