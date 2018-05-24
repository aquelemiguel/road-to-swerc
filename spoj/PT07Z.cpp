#include <bits/stdc++.h>
using namespace std;

#define INF 10000000

void bfs(const vector<vector<int>> &g, int source, vector<int>& dist) {
    queue<int> q;
    dist[source] = 0;
    q.push(source);

    while (!q.empty()) {
        int cur = q.front(); q.pop();
        for (int e : g[cur]) 
            if (dist[e] == INF) {
                dist[e] = dist[cur] + 1;
                q.push(e);
            }
    }
}

int main() {
    ios::sync_with_stdio(0); // Input and output become more efficient.
    cin.tie();

    int n, u, v;
    scanf("%d", &n);

    vector<vector<int>> g(n), h(n);

    for (int i = 0; i < n-1; i++) {
        scanf("%d %d", &u, &v); u--; v--;
        g[u].push_back(v);
        g[v].push_back(u);

        h[u].push_back(v);
        h[v].push_back(u);
    }

    vector<int> distg(g.size(), INF), disth(h.size(), INF);

    bfs(g, 0, distg);
    auto max_tg = max_element(distg.begin(), distg.end()); // Finding the largest path from random node.
    auto max_pg = distance(distg.begin(), max_tg);

    bfs(h, max_pg, disth);
    auto max_th = max_element(disth.begin(), disth.end()); // Finding the largest path from last node.
    auto max_ph = distance(disth.begin(), max_th);

    printf("%d\n", disth[max_ph]);
}