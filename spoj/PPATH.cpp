#include <bits/stdc++.h>
using namespace std;

#define INF 1000000000
#define MAX 50000

struct edge { int to, cost; };

int dijkstra(const vector<vector<edge>> &g, int source, int target, vector<int>& dist, vector<int>& prev) {
    dist[source] = 0;
    prev[source] = -1;
    set<pair<int, int>> active;
    active.insert( {0, source} );

    while (!active.empty()) {
        int cur = active.begin()->second;
        if (cur == target) return dist[cur];
        active.erase( active.begin() );
        for (edge ed : g[cur]) 
            if (dist[ed.to] > dist[cur] + ed.cost) {
                active.erase( { dist[ed.to], ed.to } );
                dist[ed.to] = dist[cur] + ed.cost;
                prev[ed.to] = cur;
                active.insert( { dist[ed.to], ed.to } );
            }
    }
    return INF;
}

set<int> sieve(int start, int goal) {
    bool prime[goal + 1];
    set<int> primes;
    memset(prime, true, sizeof(prime));

    for (int p = 2; p * p <= goal; p++)
        if (prime[p] == true)
            for (int i = p*2; i <= goal; i += p)
                prime[i] = false;
 
    for (int p = start; p <= goal; p++)
       if (prime[p]) primes.insert(p);

    return primes;
}

bool add_neighbours(int number, int goal, set<int> &primes, vector<vector<int>> &graph) {
    
    for (size_t i = 0; i < 4; i++) {
        for (size_t j = 0; j <= 9; j++) {
            string new_s = to_string(number);
            new_s[i] = j;

            int new_i = stoi(new_s);

            if (new_i != number && primes.find(new_i) != primes.end()) {
                graph[number].push_back(new_i);
            }

            if (new_i == goal) return false;
        }
    }
    return true;
}

int main() {
    ios::sync_with_stdio(0); // Input and output become more efficient.
    cin.tie();

    int tests, start, goal; 
    scanf("%d", &tests);

    while (tests--) {
        scanf("%d %d", &start, &goal);

        vector<vector<int>> g(MAX);
        set<int> primes = sieve(start, goal);

        while (add_neighbours(start, goal, primes, g)) {

        }

    }

}