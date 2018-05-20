#include <bits/stdc++.h>
using namespace std;

#define INF 1000000000

struct edge {int to, cost;};
    
int dijkstra(const vector<vector<edge>> &g, int source, int target) {
    vector<int> mind(g.size(), INF);
    set<pair<int, int>> active;
    
    mind[source] = 0;
    active.insert({0, source});

    while (!active.empty()) {
        int cur = active.begin()->second;
        if (cur == target) return mind[cur];
        
        active.erase(active.begin());

        for (edge ed : g[cur])
            if (mind[ed.to] > mind[cur] + ed.cost) {
                active.erase({mind[ed.to], ed.to});

                mind[ed.to] = mind[cur] + ed.cost;
                active.insert({mind[ed.to], ed.to});
            }
    }
    return INF;
}

int main() {
    ios::sync_with_stdio(0); // Input and output become more efficient.
    cin.tie();

    int tests;
    scanf("%d", &tests);

    while (tests--) {
        int cities, highways, s_city, e_city;
        scanf("%d %d %d %d", &cities, &highways, &s_city, &e_city);
        
        vector<vector<edge>> graph(cities);

        while (highways--) {
            int city_a, city_b, distance;
            scanf("%d %d %d", &city_a, &city_b, &distance);
            
            graph[city_a - 1].push_back({city_b - 1, distance});
            graph[city_b - 1].push_back({city_a - 1, distance});
        }

        int result = dijkstra(graph, s_city - 1, e_city - 1);
        
        (result == INF) ? printf("NONE\n") : printf("%d\n", result);
    }

}