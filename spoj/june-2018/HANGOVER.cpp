#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); // Input and output become more efficient.
    cin.tie();

    float n;
    while (scanf("%f", &n), n != 0) {
        float inc = 0, cards = 0;

        for (int i = 2; inc < n; i++, cards++)
            inc += 1.0/i;

        printf("%d card(s)\n", int(cards));
    }

}