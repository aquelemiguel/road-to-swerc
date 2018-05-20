#include <bits/stdc++.h>
using namespace std;

#define MK  make_pair
#define MAX 10000
#define INF 1000000000

struct alGraph {
    int n, prev[MAX];
    vector<int> edge[MAX], cost[MAX]; 
    
    alGraph(int s) {
        n = s;
    }
    
    void addEdge(int src, int dst, int c = 0) {
        edge[src].push_back(dst);
        cost[src].push_back(c);
    }
};

int dijkstra(alGraph& g, int start, int end, int dist[]) {
    for (int i = 0; i < g.n; i++) dist[i] = INF;

    dist[start] = 0; g.prev[start] = -1;
    priority_queue<pair<int, int>> q;

    q.push(MK(0, start));

    while (q.size()) {
        int current = q.top().second, time = -q.top().first;
        q.pop();
        
        if (time != dist[current]) continue;

        for (size_t e = 0; e < g.edge[current].size(); e++) {
            int newdist = dist[current] + g.cost[current][e];

            if (newdist < dist[g.edge[current][e]]) {
                dist[g.edge[current][e]] = newdist;
                q.push(MK(-dist[g.edge[current][e]], g.edge[current][e]));
                g.prev[g.edge[current][e]] = current;

                if (g.edge[current][e] == end) break;
            }
        }
    }
    return dist[end];
}

int main() {
    ios::sync_with_stdio(0); // Input and output become more efficient.
    cin.tie();

    int tests;
    scanf("%d", &tests);

    while (tests--) {
        int vertices, edges, va, vb;
        scanf("%d %d", &vertices, &edges);
        
        alGraph graph(vertices);

        while (edges--) {
            int pa, pb, weight;
            scanf("%d %d %d", &pa, &pb, &weight);

            graph.addEdge(pa-1, pb-1, weight);
        }

        scanf("%d %d", &va, &vb);

        int dist[vertices];
        int result = dijkstra(graph, va-1, vb-1, dist);
        
        (result == INF) ? printf("NO\n") : printf("%d\n", result);
    }

}