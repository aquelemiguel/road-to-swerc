#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie();

    int n, e, sum = 0, max = 0, occ[1001] = {0};
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &e);
        occ[e]++; sum += e;
    }

    for (int i = 0; i < 1001; i++)
        max = (i * occ[i] > max) ? (i * occ[i]) : max;

    printf("%d\n", sum - max); 
}