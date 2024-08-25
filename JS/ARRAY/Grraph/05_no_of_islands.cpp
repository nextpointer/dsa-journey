#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class Solution {
private:
    void bfs(int row, int col, vector<vector<char>>& grid, vector<vector<int>>& visited) {
        visited[row][col] = 1;
        int n = grid.size();
        int m = grid[0].size();
        queue<pair<int, int>> q;
        q.push({row, col});

        // Direction vectors for the 4-connected neighbors: up, down, left, right
        int drow[] = {-1, 1, 0, 0};
        int dcol[] = {0, 0, -1, 1};

        while (!q.empty()) {
            int row = q.front().first;
            int col = q.front().second;
            q.pop();

            // Traverse the 4-connected neighbors
            for (int i = 0; i < 4; i++) {
                int nrow = row + drow[i];
                int ncol = col + dcol[i];

                if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m &&
                    grid[nrow][ncol] == '1' && !visited[nrow][ncol]) {
                    visited[nrow][ncol] = 1;
                    q.push({nrow, ncol});
                }
            }
        }
    }

public:
    int numIslands(vector<vector<char>>& grid) {
        // Fetch the row and column size
        int n = grid.size();
        int m = grid[0].size();
        // Initialize the visited array
        vector<vector<int>> visited(n, vector<int>(m, 0));
        int count = 0;
        // Traverse each element of the grid
        for (int row = 0; row < n; row++) {
            for (int col = 0; col < m; col++) {
                if (!visited[row][col] && grid[row][col] == '1') {
                    count++;
                    bfs(row, col, grid, visited);
                }
            }
        }
        return count;
    }
};

int main() {
    // Example grid
    vector<vector<char>> grid = {
        {'1', '1', '0', '0', '0'},
        {'1', '1', '0', '0', '0'},
        {'0', '0', '1', '0', '0'},
        {'0', '0', '0', '1', '1'}
    };

    Solution sol;
    int result = sol.numIslands(grid);
    cout << "Number of islands: " << result << endl;

    return 0;
}
