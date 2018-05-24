#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); // Input and output become more efficient.
    cin.tie();

    int m, n, a[20], b[20];

    while (scanf("%d %d", &m, &n) && m != 0 && n != 0) {

        int res[m][n];
        
        for (int i = 0; i < m; i++)
            scanf("%d %d", &a[i], &b[i]);

        for (int i = 0; i < m; i++)
            for (int j = 0; j <= n; j++)
                res[i][j] = 0;

        for (int i = a[0]; i <= b[0]; i++)
            res[0][i] = 1;

        for (int i = 1; i < m; i++) {
            for (int j = 0; j <= n; j++) {
                int sum = 0;

                for (int k = a[i]; k <= b[i]; k++)
                    if (j - k >= 0)
                        sum += res[i-1][j-k];

                res[i][j] = sum;
            }
        }

        printf("%d\n", res[m-1][n]);
    }

}