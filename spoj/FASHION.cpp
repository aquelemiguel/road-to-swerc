#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); // Input and output become more efficient.
    cin.tie();

    int tests, n, p;
    scanf("%d", &tests);

    while (tests--) {
        scanf("%d", &n);
        vector<int> m, w;

        int sum = 0;

        for (int i = 0; i < n; i++) {
            scanf("%d", &p);
            m.push_back(p); 
        }
        for (int i = 0; i < n; i++) {
            scanf("%d", &p);
            w.push_back(p); 
        }
        
        sort(m.begin(), m.end());
        sort(w.begin(), w.end());

        for (int i = 0; i < n; i++) {
            sum += m[i] * w[i];
        }

        printf("%d\n", sum);
    }
}