#include <bits/stdc++.h>
using namespace std;

map<int, long long> reg;

long long dp(int n) {
    if (n == 0) return 0;   // Base case.

    if (reg[n] == 0)
        reg[n] = max((long long) n, dp(n/2) + dp(n/3) + dp(n/4));

    return reg[n];
}

int main() {
    ios::sync_with_stdio(0); // Input and output become more efficient.
    cin.tie();

    int n;

    while (scanf("%d", &n) != EOF) {
        printf("%lld\n", dp(n));
        reg.clear();
    }

}