#include <bits/stdc++.h>
using namespace std;

int dp[2000][2000];

int solve(int a[], int n, int i, int j) {
    int y = n - (j-i + 1) + 1;

    if (i > j) return 0;
    if (dp[i][j] != -1) return dp[i][j];

    return dp[i][j] = max(a[i] * y + solve(a, n, i+1, j), a[j] * y + solve(a, n, i, j-1));
}

int main() {
    ios::sync_with_stdio(0); // Input and output become more efficient.
    cin.tie();

    int n, a[2000];
    scanf("%d", &n);
    memset(dp, -1, sizeof dp);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("%d\n", solve(a, n, 0, n-1));
}