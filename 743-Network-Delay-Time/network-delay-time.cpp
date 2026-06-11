#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<pair<int, int>> adj[n+1];
        for (auto it: times) {
            adj[it[0]].push_back({it[1], it[2]});
        } 

        vector<int> dist(n+1, 1e9);
        dist[k] = 0;

        // {distance, visited node}
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        pq.push({0, k});

        while (!pq.empty()) {
            auto it = pq.top();
            pq.pop();
            int dis = it.first;
            int node = it.second;

            if (dis > dist[node]) continue;
            for (auto iter: adj[node]) {
                int neighbour = iter.first;
                int edW = iter.second;
                if (dis + edW < dist[neighbour]) {
                    dist[neighbour] = dis + edW;
                    pq.push({dis + edW, neighbour});
                }
            }
        }
        
        int maxTime = 0;
        for (int i=1; i<=n; i++) {
            if (dist[i] == 1e9) return -1;
            maxTime = max(maxTime, dist[i]);
        }
        return maxTime;
    }
};
