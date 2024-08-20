#include<bits/stdc++.h>
using namespace std;


// using adjasency matrix
// int main(){
//     int n,m;
//     cin>>n>>m;
//     int adj[n][n];
//     for(int i=0;i<n;i++){
//         int v,u;
//         cin>>v>>u;
//         adj[v][u]=1;
//         adj[u][v]=1;    
//     }
// }

// time complexity is O(N)
// space complexity is O(N^2)

// so for the space complexity we use a list for that


int main() {
    int n, m;
    
    // Ask the user for the number of vertices and edges
    cout << "Enter the number of vertices: ";
    cin >> n;
    
    cout << "Enter the number of edges: ";
    cin >> m;
    
    vector<pair<int, int>> adj[n + 1];

    // Input the edges
    cout << "Enter the edges (pairs of vertices and weight):" << endl;
    for (int i = 0; i < m; i++) {
        int v, u, w;
        cin >> v >> u >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w}); // For an undirected graph
    }

    // Print the adjacency list with weights
    cout << "\nAdjacency List of the graph with weights:" << endl;
    for (int i = 1; i <= n; i++) {
        cout << "Vertex " << i << ": ";
        for (const auto &edge : adj[i]) {
            cout << "(" << edge.first << ", weight: " << edge.second << ") ";
        }
        cout << endl;
    }

    return 0;
}



// time complexity is O(N)
// space complexity is O(2E) ->E means edge

// if there is weight graph -- for adjasency matrix store the weight instread of 1
                    //      -- for list store it as an pair way when we store it array