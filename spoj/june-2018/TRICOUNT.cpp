#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); // Input and output become more efficient.
    cin.tie();

    int t;
    long long n;
    scanf("%d", &t);

    while (t--) {
        scanf("%lld", &n);
        printf("%lld\n", (long long) (n * (n+2) * (2*n+1))/8);
    }
}