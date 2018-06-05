#include <bits/stdc++.h>
using namespace std;

#define INF 1000000000

struct edge { int to, cost; };

int dijkstra(vector<vector<edge>> &g, int source, int target, vector<int>& dist, vector<int>& prev) {
    dist[source] = 0; prev[source] = -1;
    set<pair<int, int>> active;
    active.insert({0, source});

    while (!active.empty()) {
        int cur = active.begin()->second;
        if (cur == target) return dist[cur];
        active.erase(active.begin());
        for (edge ed : g[cur]) 
            if (dist[ed.to] > dist[cur] + ed.cost) {
                active.erase({dist[ed.to], ed.to});
                dist[ed.to] = dist[cur] + ed.cost;
                prev[ed.to] = cur;
                active.insert({dist[ed.to], ed.to});
            }
    }
    return INF;
}

int main() {
    ios::sync_with_stdio(0); // Input and output become more efficient.
    cin.tie();

    int t, n, m, x, y; 
    scanf("%d", &t);

    while (t--) {
        scanf("%d %d", &n, &m);

        vector<vector<edge>> g(n);

        while (m--) {
            scanf("%d %d", &x, &y);

            g[x-1].push_back({y-1, 1});
            g[y-1].push_back({x-1, 1});
        }

        vector<int> dist(g.size(), INF), prev(g.size(), INF);
        printf("%d\n", dijkstra(g, 0, n-1, dist, prev));
    }

}