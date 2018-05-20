#include <bits/stdc++.h>
using namespace std;

int get_cycles(int n) {
    int cycles = 1;

    while (n != 1) {
        cycles++;

        if (n % 2) n = 3*n + 1; // Number is odd.
        else n = n/2;
    }
    return cycles;
}

int main() {
    ios::sync_with_stdio(0); // Input and output become more efficient.
    cin.tie();

    int a, b;
    while (scanf("%d %d", &a, &b) != EOF) {
        int maximum = 0, i = min(a, b), limit = max(a, b);

        for (; i < limit + 1; i++) {
            int cycles = get_cycles(i);
            if (cycles > maximum) maximum = cycles;
        }
        printf("%d %d %d\n", a, b, maximum);
    }
}