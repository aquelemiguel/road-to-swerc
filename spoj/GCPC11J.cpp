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

    int c;
    scanf("%d", &c);

    while (c--) {
        int n;
        scanf("%d", &n);

        vector<vector<int>> g(n), h(n);

        for (int i = 0; i < n-1; i++) {
            int a, b;
            scanf("%d %d", &a, &b);

            g[a].push_back(b);
            g[b].push_back(a);

            h[a].push_back(b);
            h[b].push_back(a);
        }

        vector<int> distg(g.size(), INF), disth(h.size(), INF);
        bfs(g, 0, distg);

        int max1 = -1, final_max = -1, furthest = -1;

        for (int i = 0; i < n; i++) {
            if (distg[i] > max1) {
                max1 = distg[i];
                furthest = i;
            }
        }

        bfs(h, furthest, disth);

        for (int i = 0; i < n; i++)
            if (disth[i] > final_max)
                final_max = disth[i];

        printf("%d\n", final_max / 2 + final_max % 2);
    }

}