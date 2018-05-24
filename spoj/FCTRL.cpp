#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); // Input and output become more efficient.
    cin.tie();

    int tests;
    scanf("%d", &tests);

    while (tests--) {
        int res = 0, num;
        scanf("%d", &num);

        for (size_t i = 1; num / pow(5, i) >= 1; i++) {
            res += floor(num / pow(5, i));
        }
        printf("%d\n", res);
    }

}