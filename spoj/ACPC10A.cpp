#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); // Input and output become more efficient.
    cin.tie();

    while (true) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);

        if (a == 0 && b == 0 && c == 0) break;

        if ((2*b-a) == c) printf("AP %d\n", c + b-a);
        if (pow(b, 2)/a == c) printf("GP %d\n", c * b/a);
    }

}