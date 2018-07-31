#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie();

    int n, k, e, a[1000] = {0}, res = 0;
    scanf("%d %d", &n, &k);

    for (int i = 0; i < n; i++) {
        scanf("%d", &e); 
        a[e-1]++;
    }

    for (int i = 0; i < 1000; i++)
        if (a[i] >= k) res++;

    printf("%d\n", res);
}