#include <iostream>
#include <vector>
#include <unordered_map>
#include <list>

using namespace std;

// Helper function: Uses DFS to detect cycles in a directed graph
bool checkCycleDFS(int node, unordered_map<int, bool> &visited, 
                   unordered_map<int, bool> &dfsVisited, 
                   unordered_map<int, list<int>> &adj) {
    
    visited[node] = true;
    dfsVisited[node] = true; // Add to current recursion path

    for(auto neighbour : adj[node]) {
        if(!visited[neighbour]) {
            bool cycleDetected = checkCycleDFS(neighbour, visited, dfsVisited, adj);
            if(cycleDetected) return true;
        }
        // If the neighbor is already in the active path, it's a cycle
        else if(dfsVisited[neighbour]) {
            return true;
        }
    }

    // Backtracking: Remove the node from the active path
    dfsVisited[node] = false;
    return false;
}

int detectCycleInDirectedGraph(int n, vector<pair<int, int>> &edges) {
    // 1. Create Adjacency List
    unordered_map<int, list<int>> adj;
    for(int i = 0; i < edges.size(); i++) {
        int u = edges[i].first;
        int v = edges[i].second;
        adj[u].push_back(v); 
    }

    // 2. Track visited and active recursion nodes
    unordered_map<int, bool> visited;
    unordered_map<int, bool> dfsVisited;

    // 3. Handle disconnected components (1 to N nodes)
    for(int i = 1; i <= n; i++) {
        if(!visited[i]) {
            bool cycleFound = checkCycleDFS(i, visited, dfsVisited, adj);
            if(cycleFound) return true;
        }
    }

    return false;
}

int main() {
    int n, m;
    cout << "Enter number of nodes and edges: ";
    cin >> n >> m;

    vector<pair<int, int>> edges;
    cout << "Enter " << m << " edges (u v):" << endl;
    for(int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        edges.push_back({u, v});
    }

    if(detectCycleInDirectedGraph(n, edges)) {
        cout << "Result: Cycle Present (True)" << endl;
    } else {
        cout << "Result: No Cycle (False)" << endl;
    }

    return 0;
}