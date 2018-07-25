#include <bits/stdc++.h>
using namespace std;

long long dp[100000];

long long max(long long pick1, long long pick2, long long pick3) {
    long long x = (pick1 > pick2) ? pick1 : pick2;
    return (pick3 > x) ? pick3 : x;
}

long long solve(long long a[], int n, int i) {
    if (i >= n) return 0;
    if (dp[i] != -1) return dp[i];

    if (i < n-2)
        dp[i] = max(a[i] + solve(a, n, i+2), a[i] + a[i+1] + solve(a, n, i+4), a[i] + a[i+1] + a[i+2] + solve(a, n, i+6));

    else if (i < n-1)
        dp[i] = max(a[i] + solve(a, n, i+2), a[i] + a[i+1] + solve(a, n, i+4));

    else
        dp[i] = a[i] + solve(a, n, i+2);

    return dp[i];
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie();

    int t, n;
    scanf("%d", &t);

    while (t--) {
        scanf("%d", &n);
        memset(dp, -1, sizeof dp);
        long long a[n];

        for (int i = 0; i < n; i++)
            scanf("%lld", &a[i]);

        printf("%lld\n", solve(a, n, 0));
    }

}