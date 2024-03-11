#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    /*  Function to implement Bellman Ford
    *   edges: vector of vectors which represents the graph
    *   S: source vertex to start traversing graph with
    *   V: number of vertices

    */
    vector<int> bellman_ford(int V, vector<vector<int>>& edges, int S) {
        vector<int> dist(V, 1e8);
        dist[S] = 0;

        // Relax edges |V| - 1 times
        for (int i = 0; i < V - 1; i++) {
            for (auto it : edges) {
                int u = it[0];
                int v = it[1];
                int wt = it[2];

                if (dist[u] != 1e8 && dist[u] + wt < dist[v]) {
                    dist[v] = dist[u] + wt;
                }
            }
        }

        // Nth relaxation to check for negative edge cycle
        for (auto it : edges) {
            int u = it[0];
            int v = it[1];
            int wt = it[2];

            if (dist[u] != 1e8 && dist[u] + wt < dist[v]) {
                return {-1}; // Negative cycle found
            }
        }

        return dist;
    }
};

int main() {
    Solution solution;
    int V = 5; // Number of vertices
    int S = 0; // Source vertex
    vector<vector<int>> edges = {{0, 1, 10}, {1, 2, -20}, {2, 1, -30}};

    vector<int> result = solution.bellman_ford(V, edges, S);

    cout << "Shortest distances from source vertex " << S << ":\n";
    for (int i = 0; i < V; i++) {
        if (result[i] == 1e8) {
            cout << "Vertex " << i << ": No path\n";
        } else {
            cout << "Vertex " << i << ": " << result[i] << "\n";
        }
    }

    return 0;
}
