#include <bits/stdc++.h>
using namespace std;

bool find_triplet(int n, int a[], int p) {
    for (int i = 0; i < n-2; i++) {
        int j = i+1, k = n-1;

        while (j < k) {
            if (a[i] + a[j] + a[k] == p) return true;
            else if (a[i] + a[j] + a[k] > p) k--;
            else j++;
        }
    }
    return false;
}

int main() {
    ios::sync_with_stdio(0); // Input and output become more efficient.
    cin.tie();

    int t, n, p;
    scanf("%d", &t);

    while (t--) {
        scanf("%d", &n);
        int a[n];

        for (int i = 0; i < n; i++)
            scanf("%d", &a[i]);

        scanf("%d", &p);
        sort(a, a+n);   // Sort for binary search.

        find_triplet(n, a, p) ? printf("YES\n") : printf("NO\n");
    }
}