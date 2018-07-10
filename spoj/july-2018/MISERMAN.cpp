#include <bits/stdc++.h>
using namespace std;

#define MAX 10000000

int min(int a, int b, int c) {
    int d = a < b ? a : b;
    return d < c ? d : c;
}

int main() {
    ios::sync_with_stdio(0); // Input and output become more efficient.
    cin.tie();

    int n, m, dp[101][101], res = MAX;
    scanf("%d %d", &n, &m);

    for (int i = 0; i < 101; i++)
        for (int j = 0; j < 101; j++)
            dp[i][j] = MAX;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &dp[i][j]);

            if (i > 0)
                dp[i][j] += min(dp[i-1][j-1], dp[i-1][j], dp[i-1][j+1]);
        }
    }

    for (int i = 0; i < m; i++)
        res = dp[n-1][i] < res ? dp[n-1][i] : res;

    printf("%d", res);
}