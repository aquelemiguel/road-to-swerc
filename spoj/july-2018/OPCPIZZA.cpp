#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); // Input and output become more efficient.
    cin.tie();

    int t, n, m;
    scanf("%d", &t);

    while (t--) {
        scanf("%d %d", &n, &m);
        int money[n], res = 0;

        for (int i = 0; i < n; i++)
            scanf("%d", &money[i]);

        sort(money, money + n); // Sort for binary search.

        for (int i = 0; i < n; i++) {
            int j = lower_bound(money, money + n, m - money[i]) - money;    // Finds the position of the complementary element of money[i], if exists.
            if (money[i] + money[j] == m && j != i && j != n) res++;
        }
        printf("%d\n", res / 2);
    }

}