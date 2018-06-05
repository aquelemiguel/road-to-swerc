#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); // Input and output become more efficient.
    cin.tie();

    int tests, n;
    scanf("%d", &tests);

    while (tests--) {
        scanf("%d", &n);
        printf("%d\n", int(ceil(n/2.0)));
    }
}