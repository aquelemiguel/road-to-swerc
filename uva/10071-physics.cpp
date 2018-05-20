#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); // Input and output become more efficient.
    cin.tie();

    int v, t;
    while (scanf("%d %d", &v, &t) != EOF) {
        printf("%d\n", v * 2 * t);
    }

}