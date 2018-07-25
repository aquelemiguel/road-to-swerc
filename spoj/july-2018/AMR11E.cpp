#include <bits/stdc++.h>
using namespace std;

int lucky_number(int n) {
    int primes[3000] = {0};
    vector<int> res;

    for (int i = 2; i < 3000; i++) {
        if (primes[i] == 0) {
            primes[i] = 1;

            for (int j = i*2; j < 3000; j += i) {
                primes[j]--;
                if (primes[j] == -3) res.push_back(j);
            }
        }
    }
    sort(res.begin(), res.end());
    return res[n-1];
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie();

    int t, n;
    scanf("%d", &t);

    while (t--) {
        scanf("%d", &n);
        printf("%d\n", lucky_number(n));
    }
}