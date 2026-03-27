#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
#include <list>
#include <string>

using namespace std;

// Helper function to perform BFS and detect cycles
bool isCyclicBFS(int src, unordered_map<int, bool> &visited, unordered_map<int, list<int>> &adj) {
    unordered_map<int, int> parent;
    
    parent[src] = -1; // Root node has no parent
    visited[src] = true;
    queue<int> q;
    q.push(src);
    
    while(!q.empty()) {
        int front = q.front();
        q.pop();
        
        for(auto neighbour : adj[front]) {
            // Logic: If neighbor is already visited and it's NOT the parent, 
            // it means we found another path to the same node -> CYCLE!
            if(visited[neighbour] == true && neighbour != parent[front]) {
                return true; 
            }
            else if(!visited[neighbour]) {
                visited[neighbour] = true;
                parent[neighbour] = front;
                q.push(neighbour);
            }
        }
    }
    return false;
}

// Main function to handle graph setup and disconnected components
string cycleDetection(vector<vector<int>>& edges, int n, int m) {
    // 1. Create Adjacency List
    unordered_map<int, list<int>> adj;
    for(int i = 0; i < m; i++) {
        int u = edges[i][0];
        int v = edges[i][1];
        
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    // 2. To handle disconnected components
    unordered_map<int, bool> visited;
    // Note: Starting from 1 because the problem specifies vertices 1 to N
    for(int i = 1; i <= n; i++) {
        if(!visited[i]) {
            bool ans = isCyclicBFS(i, visited, adj);
            if(ans) return "Yes";
        }
    }
    
    return "No";
}

int main() {
    int n, m;
    cout << "Enter number of vertices (N) and edges (M): ";
    cin >> n >> m;

    vector<vector<int>> edges(m, vector<int>(2));
    cout << "Enter " << m << " edges (u v):" << endl;
    for(int i = 0; i < m; i++) {
        cin >> edges[i][0] >> edges[i][1];
    }

    string result = cycleDetection(edges, n, m);
    cout << "Result: " << result << endl;

    return 0;
}

/*

// Helper function to perform DFS and detect cycles
bool isCyclicDFS(int node, int parent, unordered_map<int, bool> &visited, unordered_map<int, list<int>> &adj) {
    visited[node] = true;

    for(auto neighbour : adj[node]) {
        if(!visited[neighbour]) {
            // Recursive call: the current 'node' becomes the 'parent' for the neighbour
            bool cycleDetected = isCyclicDFS(neighbour, node, visited, adj);
            if(cycleDetected) return true;
        }
        // If neighbor is visited and it's NOT the parent, it's a cycle
        else if(neighbour != parent) {
            return true;
        }
    }
    return false;
}


// 2. Handle Disconnected Components
    unordered_map<int, bool> visited;
    for(int i = 1; i <= n; i++) {
        if(!visited[i]) {
            // Initial call: the first node has no parent, so we pass -1
            bool ans = isCyclicDFS(i, -1, visited, adj);
            if(ans) return "Yes";
        }
    }

*/