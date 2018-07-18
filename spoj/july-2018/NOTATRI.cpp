#include <bits/stdc++.h>
using namespace std;

int tpt(int a[], int n) {
    int r = 0;

    for (int i = n-1; i > 1; i--) {
        for (int j = 0, k = i-1; j < k; j++) {
            while (j < k && a[i] <= a[j] + a[k]) k--;
            r += k-j;
        }
    }
    return r;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie();

    int n;
    while (scanf("%d", &n), n != 0) {
        int a[n];

        for (int i = 0; i < n; i++)
            scanf("%d", &a[i]);

        sort(a, a+n);
        printf("%d\n", tpt(a, n));
    }

}