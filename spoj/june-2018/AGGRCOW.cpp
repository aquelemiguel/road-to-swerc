#include <bits/stdc++.h>
using namespace std;

bool f(int s[], int n, int c, int mid) {
    if (mid == 0 || mid == 1) return true;

    int placed = 1, prev = 1;

    for (int i = 1; i < n; i++) {
        if (s[i] - prev >= mid) {
            placed++; prev = s[i];
        }
        if (placed == c) return true;
    }
    return false;
}

int bins(int s[], int n, int c, int low, int high) {
    
    while (low < high) {
        int mid = low + (high - low) / 2;
        f(s, n, c, mid) ? low = mid + 1 : high = mid;
    }
    return high - 1;
}

int main() {
    ios::sync_with_stdio(0); // Input and output become more efficient.
    cin.tie();

    int t, n, c;
    scanf("%d", &t);

    while (t--) {
        scanf("%d %d", &n, &c);
        int s[n];

        for (int i = 0; i < n; i++)
            scanf("%d", &s[i]);

        sort(s, s+n);   // Sort for binary search.

        printf("%d\n", bins(s, n, c, 0, s[n-1] - s[0]));
    }

}