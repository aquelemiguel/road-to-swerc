#include <bits/stdc++.h>
using namespace std;

#define MAX 100000

int min(int a, int b, int c) {
    int d = a < b ? a : b;
    return d < c ? d : c;
}

int main() {
    ios::sync_with_stdio(0); // Input and output become more efficient.
    cin.tie();

    int t, n;
    scanf("%d", &t);

    while (t--) {
        scanf("%d", &n);
        int dp[n][3], res = MAX;

        for (int i = 0; i < n; i++) {
            scanf("%d %d %d", &dp[i][0], &dp[i][1], &dp[i][2]);

            if (i > 0) {
                dp[i][0] += min(dp[i-1][1], dp[i-1][2]);
                dp[i][1] += min(dp[i-1][0], dp[i-1][2]);
                dp[i][2] += min(dp[i-1][0], dp[i-1][1]);
            }
        }

        printf("%d\n", min(dp[n-1][0], dp[n-1][1], dp[n-1][2]));
    }

}