#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); // Input and output become more efficient.
    cin.tie();

    int tests, num;
    scanf("%d", &tests);

    for (int i = 0; i < tests; i++) {
        set<int> factors;
        scanf("%d", &num);

        while (num % 2 == 0) {
            factors.insert(2);
            num /= 2;
        }

        for (int j = 3; j <= sqrt(num); j += 2) {
            while (num % j == 0) {
                factors.insert(j);
                num /= j;
            }
        }

        if (num > 2)
            factors.insert(num);

        printf("Case %d:", i+1);
        for (int val : factors)
            printf(" %d", val);

        printf("\n");

    }

}