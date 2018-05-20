#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); // Input and output become more efficient.
    cin.tie();

    int n, c = 1;

    while (true) { 
        scanf("%d", &n);
        if (n < 0) break;

        printf("Case %d: %d\n", c, int(ceil(log2(n))));
        c++;
    }

}