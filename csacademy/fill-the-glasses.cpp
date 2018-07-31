#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie();

    int n, k, a[100], sum = 0;
    scanf("%d %d", &n, &k);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    sort(a, a+n);

    for (int i = 0; i < k; i++)
        sum += a[i];

    printf("%d\n", int(ceil(sum / 100.0)));
}