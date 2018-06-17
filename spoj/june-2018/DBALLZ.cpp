#include <bits/stdc++.h>
using namespace std;

int unbounded_knapsack(int c, int w[], int v[], int n) {
    int dp[c+1];
    memset(dp, 0, sizeof dp);

    for (int i = 0; i <= c; i++)
        for (int j = 0; j < n; j++)
            if (w[j] <= i) dp[i] = max(dp[i], dp[i-w[j]] + v[j]);

    return dp[c];
}

int main() {
    ios::sync_with_stdio(0); // Input and output become more efficient.
    cin.tie();

    int t; 
    scanf("%d", &t);

    while (t--) {
        int c, n;
        scanf("%d %d", &c, &n);

        int w[n], v[n];

        for (int i = 0; i < n; i++)
            scanf("%d", &w[i]);

        for (int i = 0; i < n; i++)
            scanf("%d", &v[i]);

        printf("%d\n", unbounded_knapsack(c, w, v, sizeof(v) / sizeof(v[0])));
    }

}