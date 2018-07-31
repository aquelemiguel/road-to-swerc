#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie();

    int n, a[1000], sum = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    sort(a, a+n);

    for (int i = 0; i < n; i+=2)
        sum += (a[i+1] - a[i]);

    printf("%d\n", sum);
}