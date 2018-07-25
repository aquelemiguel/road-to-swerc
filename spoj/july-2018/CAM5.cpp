#include <bits/stdc++.h>
using namespace std;

class DFS {
    int n;
    list<int> *adj;
    void dfs_util(int v, bool visited[]);

    public:
        DFS(int n);
        void add_edge(int a, int b);
        int connected_components();
};

int DFS::connected_components() {
    bool *visited = new bool[n];
    int islands = 0;

    for (int i = 0; i < n; i++)
        visited[i] = false;

    for (int i = 0; i < n; i++)
        if (!visited[i]) {
            dfs_util(i, visited); islands++;
        }

    return islands;
}

void DFS::dfs_util(int v, bool visited[]) {
    visited[v] = true;

    for (list<int>::iterator it = adj[v].begin(); it != adj[v].end(); it++)
        if (!visited[*it]) dfs_util(*it, visited);
}

DFS::DFS(int n) {
    this->n = n;
    this->adj = new list<int>[n];
}

void DFS::add_edge(int a, int b) {
    this->adj[a].push_back(b);
    this->adj[b].push_back(a);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie();

    int t, n, e, a, b;
    scanf("%d", &t);

    while (t--) {
        scanf("%d %d", &n, &e);
        DFS g(n);

        for (int i = 0; i < e; i++) {
            scanf("%d %d", &a, &b);
            g.add_edge(a, b);
        }

        printf("%d\n", g.connected_components());
    }
}