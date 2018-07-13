#include <bits/stdc++.h>
using namespace std;

unsigned long long dp[10000];

unsigned long long solve(unsigned long long a[], int n, int i) {
    if (i >= n) return 0;
    if (dp[i] != -1) return dp[i];

    return dp[i] = max(a[i] + solve(a, n, i+2), solve(a, n, i+1));
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie();

    int t, n;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        scanf("%d", &n);
        unsigned long long a[n];
        memset(dp, -1, sizeof dp);

        for (int j = 0; j < n; j++)
            scanf("%llu", &a[j]);

        printf("Case %d: %llu\n", i+1, solve(a, n, 0));
    }

}