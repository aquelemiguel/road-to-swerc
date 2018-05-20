#include <bits/stdc++.h>
using namespace std;

#define FOR(i,n)        for (int i = 0 ; i < (n) ; i++)
#define MAX             100
#define INF             1000000000

struct edge {int to, cost;};

struct amGraph{
    int n, edge[MAX][MAX];
    
    amGraph(int s, int val = INF) { 
        n = s; FOR(i,n) FOR(j,n) edge[i][j] = val; 
    }
    
    void addEdge(int src, int dst, int c = 0) { 
        edge[src][dst] = c; 
    }
};

void floyd(amGraph &g) {
    FOR(i, g.n) g.edge[i][i] = 0;
    FOR(k, g.n) FOR(i, g.n)
    
    if (g.edge[i][k] != INF) FOR (j, g.n)
        g.edge[i][j] = min(g.edge[i][j], g.edge[i][k] + g.edge[k][j]);
}

int main() {
    ios::sync_with_stdio(0); // Input and output become more efficient.
    cin.tie();

    int cells, exit_cell, timer, connections, res = 0;
    scanf("%d\n%d\n%d\n%d", &cells, &exit_cell, &timer, &connections);

    amGraph graph(cells);

    while (connections--) {
        int cell_a, cell_b, distance;
        scanf("%d %d %d", &cell_a, &cell_b, &distance);
        graph.addEdge(cell_a - 1, cell_b - 1, distance);
    }

    floyd(graph);

    for (size_t i = 0; i < graph.n; i++)
        if (graph.edge[i][exit_cell - 1] <= timer) res++;

    printf("%d\n", res);
}