#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); // Input and output become more efficient.
    cin.tie();

    int n;
    while (scanf("%d", &n), n != -1) {
        int b[n], sum = 0, moves = 0, mean;

        for (int i = 0; i < n; i++) {
            scanf("%d", &b[i]);
            sum += b[i];
        }

        if (sum % n != 0) {
            printf("-1\n");
            continue;
        }

        mean = sum / n;

        for (int i = 0; i < n; i++)
            if (b[i] < mean) moves += mean - b[i]; 

        printf("%d\n", moves);
    }

}