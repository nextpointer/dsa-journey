#include <bits/stdc++.h>
using namespace std;

class Solution {
private: 
    void bfs(int row, int col, vector<vector<int>>& vis, vector<pair<int, int>>& vec, vector<vector<int>>& grid) {
        vis[row][col] = 1;
        int n = grid.size();
        int m = grid[0].size();
        queue<pair<int, int>> q;
        q.push({row, col});
        int base_row = row;
        int base_col = col;
        vec.push_back({0, 0});
        
        int drow[] = {-1, 1, 0, 0};
        int dcol[] = {0, 0, -1, 1};
        
        while (!q.empty()) {
            int curr_row = q.front().first;
            int curr_col = q.front().second;
            q.pop();
            
            for (int k = 0; k < 4; k++) {
                int nrow = curr_row + drow[k];
                int ncol = curr_col + dcol[k];
                
                if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && 
                    !vis[nrow][ncol] && grid[nrow][ncol] == 1) {
                    vis[nrow][ncol] = 1;
                    q.push({nrow, ncol});
                    vec.push_back({nrow - base_row, ncol - base_col});
                }
            }
        }
    }

public:
    int countDistinctIslands(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        
        set<vector<pair<int, int>>> s;
        vector<vector<int>> vis(n, vector<int>(m, 0));
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (!vis[i][j] && grid[i][j] == 1) {
                    vector<pair<int, int>> vec;
                    bfs(i, j, vis, vec, grid);
                    s.insert(vec);
                }
            }
        }
        
        return s.size();
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        cout << obj.countDistinctIslands(grid) << endl;
    }
    return 0;
}
