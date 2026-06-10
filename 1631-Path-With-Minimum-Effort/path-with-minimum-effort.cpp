#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        
        // {diff, {row, col}}
        priority_queue<pair<int, pair<int,int>>,
        vector<pair<int,pair<int,int>>>, greater<pair<int, pair<int, int>>>> pq;

        int n = heights.size();
        int m = heights[0].size();

        vector<vector<int>> dist(n, vector<int>(m, 1e9));
        dist[0][0] = 0;
        pq.push({0, {0,0}});

        int dr[] = {-1, 0, 1, 0};
        int dc[] = {0, 1, 0, -1};

        // Time Complexity -> O(E log V)    E->Edges, V->nodes
        // Time Complexity -> n x m x 4 x log (n x m)

        while (!pq.empty()) {
            auto it = pq.top();
            pq.pop();

            int diff = it.first;
            int row = it.second.first;
            int col = it.second.second;

            if (row == n-1 && col == m-1) return diff;
            
            for (int i=0; i<4; i++) {
                int newr = row + dr[i];
                int newc = col + dc[i];
                
                if (newr >=0 && newr < n && newc >= 0 && newc < m) {
                    int newEffort = max(abs(heights[newr][newc] - heights[row][col]), diff);
                    if (newEffort < dist[newr][newc]) {
                        dist[newr][newc] = newEffort;
                        pq.push({newEffort ,{newr, newc}});
                    }
                }
            }   
        }
        return 0;   // unreachable

    }
};