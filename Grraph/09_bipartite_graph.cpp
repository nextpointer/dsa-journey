#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Solution {
private:
    bool check(int start, int color[], vector<vector<int>>& graph, int size) {
        queue<int> q;
        q.push(start);
        color[start] = 0;

        while (!q.empty()) {
            int node = q.front();
            q.pop();

            for (auto it : graph[node]) {
                if (color[it] == -1) {
                    color[it] = !color[node];
                    q.push(it);
                } else if (color[it] == color[node]) {
                    return false;
                }
            }
        }

        return true;
    }

public:
    bool isBipartite(vector<vector<int>>& graph) {
        int size = graph.size();
        int color[size];
        for (int i = 0; i < size; i++) color[i] = -1;

        // Traverse each connected component
        for (int i = 0; i < size; i++) {
            if (color[i] == -1) {
                if (!check(i, color, graph, size)) {
                    return false;
                }
            }
        }

        return true;
    }
};

int main() {
    Solution sol;

    // Example graph
    vector<vector<int>> graph = {
        {1, 3},
        {0, 2},
        {1, 3},
        {0, 2}
    };

    bool result = sol.isBipartite(graph);
    if (result) {
        cout << "The graph is bipartite." << endl;
    } else {
        cout << "The graph is not bipartite." << endl;
    }

    return 0;
}
