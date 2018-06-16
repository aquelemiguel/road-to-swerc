#include <bits/stdc++.h>
using namespace std;

pair<int,int> knapsack(int c, int w[], int v[], int n) {
    int dp[n+1][c+1];

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= c; j++) {
            
            if (i == 0 || j == 0) dp[i][j] = 0;
            
            else if (w[i-1] <= j)
                dp[i][j] = max(v[i-1] + dp[i-1][j-w[i-1]], dp[i-1][j]);

            else dp[i][j] = dp[i-1][j];
        }
    }

    for (int i = 0; i <= c; i++)
        if (dp[n][i] == dp[n][c]) return make_pair(i, dp[n][c]);

    return make_pair(c, dp[n][c]);
}

int main() {
    ios::sync_with_stdio(0); // Input and output become more efficient.
    cin.tie();

    int bud, n;

    while (scanf("%d %d", &bud, &n), bud != 0 && n != 0) {

        int fee[n], fun[n];

        for (int i = 0; i < n; i++)
            scanf("%d %d", &fee[i], &fun[i]);

        pair<int,int> res = knapsack(bud, fee, fun, sizeof(fun) / sizeof(fun[0]));
        printf("%d %d\n", res.first, res.second);
    }
    
}