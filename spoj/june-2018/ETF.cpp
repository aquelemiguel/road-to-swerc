#include <bits/stdc++.h>
using namespace std;

int totient(int n) {
    int res = n;

    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0) {
            while (n % i == 0) n /= i;
            res -= res / i;
        }
    }

    if (n > 1) res -= res / n;
    return res;
}

int main() {
    ios::sync_with_stdio(0); // Input and output become more efficient.
    cin.tie();

    int t, n; cin >> t;
    while (t--) {
        cin >> n;
        cout << totient(n) << "\n";
    }
}