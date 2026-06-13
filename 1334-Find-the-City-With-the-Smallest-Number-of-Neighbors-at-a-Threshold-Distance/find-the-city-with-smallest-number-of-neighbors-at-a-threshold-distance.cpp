#include <bits/stdc++.h>    
using namespace std;


class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
        // 1. Initialise a dist vector with INF
        vector<vector<int>> dist(n, vector<int>(n, 1e9));

        // 2. dist[i][i] = 0
        for (int i=0; i<n; i++) {
            for (int j=0; j<n; j++) {
                if (i == j) dist[i][j] = 0;
            }
        }

        // 3. Insert all the edges
        for (auto it: edges) {
            int u = it[0];
            int v = it[1];
            int wt = it[2];

            dist[u][v] = wt;
            dist[v][u] = wt;   // Undirected graph
        }

        // 4. Floyd-Warshall 
        for (int k=0; k<n; k++) {
            for (int i=0; i<n; i++) {
                for (int j=0; j<n; j++) {
                    if (dist[i][k] != 1e9 && dist[k][j] != 1e9) {
                        dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
                    }
                }
            }
        }
        
        // 5. Count cities reachable within threshold 
        int cityNo = -1;
        int cntCity = n;

        for (int city=0; city<n; city++) {
            int cnt = 0;

            for (int adjCity = 0; adjCity<n; adjCity++) {
                if (dist[city][adjCity] <= distanceThreshold) {
                    cnt++;
                }
            }

            if (cnt <= cntCity) {
                cntCity = cnt;
                cityNo = city;
            }
        }

        return cityNo;
    }
};