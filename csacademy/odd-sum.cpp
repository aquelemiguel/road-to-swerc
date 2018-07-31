#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie();

    int n, e, parity[2] = {0};
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &e);
        parity[e % 2]++;
    }

    printf("%d", parity[0] * parity[1]);
}