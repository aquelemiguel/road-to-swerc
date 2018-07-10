#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); // Input and output become more efficient.
    cin.tie();

    int n, k, res = 0;
    scanf("%d %d", &n, &k);

    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    sort(a, a+n);   // Sort for binary search.

    for (int i = 0; i < n; i++) {
        int j = lower_bound(a, a+n, a[i] - k) - a;
        if (a[i] - a[j] == k && i != j && j != n) res++; 
    }
    printf("%d\n", res);
}