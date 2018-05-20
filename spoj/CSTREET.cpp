#include <bits/stdc++.h>
using namespace std;

/* Kruskal Minimum Spanning Tree Algorithm */
#define MAX     300000
#define MK      make_pair 
#define COST    first
#define V1      second.first
#define V2      second.second
typedef pair<int,int> PII;

struct uf {
    int p[MAX], rank[MAX], number[MAX];
    int size, sets;

    uf (int s) {
        size = sets = s;
        for (int i = 0; i < size; i++) 
        { p[i]=i; rank[i]=0; number[i]=1; }
    }

    void link(int x, int y) {
        if(x == y) return;
        if (rank[x] <= rank[y]) {
            p[x] = y;
            --sets;
            number[y] += number[x];
        if (rank[x] == rank[y])
            rank[y]++;
    } else link(y, x);
  }

  int find_set(int x) {
    if (x != p[x]) p[x] = find_set(p[x]);
    return p[x];
  }

  int find_length(int x) {
    return number[ find_set(p[x]) ];
  }

  void union_set(int x, int y) {
    link(find_set(x), find_set(y));
  }
};

struct elGraph{ 
    int ne, n;
    pair <int, PII> edge[MAX];
    elGraph (int s) { n = s; ne = 0; }
    void addEdge(int src, int dst, int c) { edge[ne++] = MK(c, PII(src, dst)); }
};

int kruskal(elGraph &g, int mst[]) {
    for (int i = 0; i < g.ne; i++) mst[i] = false;
    uf s(g.n);
    int i, minimum = 0;
  
    sort(g.edge, g.edge + g.ne);
    for (i = 0; i < g.ne; i++)
        if (s.find_set(g.edge[i].V1) != s.find_set(g.edge[i].V2)) {
            s.union_set(g.edge[i].V1, g.edge[i].V2);
            mst[i] = true;
            minimum += g.edge[i].COST;
        }
    return minimum;
}

int main() {
    ios::sync_with_stdio(0); // Input and output become more efficient.
    cin.tie();

    int tests;
    scanf("%d", &tests);

    while (tests--) {
        int price, buildings, streets;
        scanf("%d\n%d\n%d", &price, &buildings, &streets);

        elGraph graph(buildings);
        int mst[streets];

        while (streets--) {
            int build_a, build_b, length;
            scanf("%d %d %d", &build_a, &build_b, &length);
            graph.addEdge(build_a - 1, build_b - 1, length);
        }
        
        printf("%d\n", kruskal(graph, mst) * price);
    }

}