#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> vis(m, vector<int>(n, 0));
        queue<pair<int, int>> q;

        // Traverse the first & last row
        for(int i=0; i<n; i++) {
            
            // first row
            if (!vis[0][i] && grid[0][i] == 1) {
                vis[0][i] = 1;
                q.push({0, i});
            }

            // last row
            if (!vis[m-1][i] && grid[m-1][i] == 1) {
                vis[m-1][i] = 1;
                q.push({m-1, i});
            }
        }

        // Traverse the first & last col
        for (int j=0; j<m; j++) {

            // first column
            if (!vis[j][0] && grid[j][0] == 1) {
                vis[j][0] = 1;
                q.push({j, 0});
            }

            // last column
            if (!vis[j][n-1] && grid[j][n-1] == 1) {
                vis[j][n-1] = 1;
                q.push({j, n-1});
            }
        }

        int delrow[] = {-1,  0, 1, 0};
        int delcol[] = {0, 1, 0, -1};

        while (!q.empty()) {
            int row = q.front().first;
            int col = q.front().second;
            q.pop();

            for (int i=0; i<4; i++) {
                int nrow = row + delrow[i];
                int ncol = col + delcol[i];
                if (nrow>=0 && nrow<m && ncol>=0 && ncol<n && vis[nrow][ncol] == 0 && grid[nrow][ncol] == 1) {
                    q.push({nrow, ncol});
                    vis[nrow][ncol] = 1;
                }
            }
        }

        int cnt = 0;
        for (int i=0; i<m; i++) {
            for (int j=0; j<n; j++) {
                if (grid[i][j] == 1 && vis[i][j] == 0) cnt++;
            }
        }
        return cnt;

    }
};