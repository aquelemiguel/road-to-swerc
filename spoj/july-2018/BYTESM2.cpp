#include <bits/stdc++.h>
using namespace std;

int max(int a, int b, int c) {
    int d = a > b ? a : b;
    return d > c ? d : c;
}

int main() {
    ios::sync_with_stdio(0); // Input and output become more efficient.
    cin.tie();

    int t, h, w;
    scanf("%d", &t);

    while (t--) {
        int dp[101][101], res = 0;
        scanf("%d %d", &h, &w);

        for (int i = 0; i < 101; i++)
            dp[0][i] = 0;

        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++) {
                scanf("%d", &dp[i][j]);

                if (i > 0)
                    if (j == 0)
                        dp[i][j] += max(dp[i-1][j], dp[i-1][j+1]);
                    
                    else if (j == w-1)
                        dp[i][j] += max(dp[i-1][j-1], dp[i-1][j]);

                    else
                        dp[i][j] += max(dp[i-1][j-1], dp[i-1][j], dp[i-1][j+1]);
            }
        }

        for (int i = 0; i < w; i++)
            res = dp[h-1][i] > res ? dp[h-1][i] : res;

        printf("%d\n", res);
    }

}