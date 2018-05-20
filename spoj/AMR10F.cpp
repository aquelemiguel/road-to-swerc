#include <stdio.h>

int main() {
    int tests;

    for (scanf("%d", &tests); tests > 0; tests--) {
        int base, diff, piles;
        scanf("%d %d %d", &piles, &base, &diff);

        int acc = base;

        for (size_t i = 1; i < piles; i++) {
            base += diff;
            acc += base;
        }

        printf("%d\n", acc);
    }

}