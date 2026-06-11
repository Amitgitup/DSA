#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int countPaths(int n, vector<vector<int>>& roads) {
        vector<pair<int, int>> adj[n];
        for (auto it: roads) {
            adj[it[0]].push_back({it[1], it[2]});
            adj[it[1]].push_back({it[0], it[2]});
        }

        priority_queue<pair<int, int>,vector<pair<int, int>>,greater<pair<int, int>>> pq;
        vector<long long> dist(n, 1e18);
        vector<int> ways(n, 0);
        dist[0] = 0;
        ways[0] = 1;
        pq.push({0, 0});
        int mod = (int)(1e9 + 7);

        while (!pq.empty()) {
            auto it = pq.top();
            pq.pop();
            int dis = it.first;
            int node = it.second;

            for (auto iter: adj[node]) {
                int adjNode = iter.first;
                int edW = iter.second;
                // this is the first time I am coming with this short distance
                if (dis + edW < dist[adjNode]) {
                    dist[adjNode] = dis + edW;
                    pq.push({dis + edW, adjNode});
                    ways[adjNode] = ways[node];
                }
                else if (dis + edW == dist[adjNode]) {
                    ways[adjNode] = (ways[adjNode] + ways[node])%mod; 
                }
            }
        }
        return ways[n-1] % mod;
    }
};