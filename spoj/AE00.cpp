#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); // Input and output become more efficient.
    cin.tie();

    int squares, sum;
    scanf("%d", &squares);

    sum = squares;

    for (size_t i = 2; i <= squares/2; i++) {
        for (size_t j = i; j <= squares/2; j++) {
            if (i * j <= squares) sum++;
        }
    }

    printf("%d", sum);
}