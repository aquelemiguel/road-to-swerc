#include <bits/stdc++.h>
using namespace std;

vector<unsigned long long> get_factors(unsigned long long n) {
    vector<unsigned long long> factors;

    for (; n % 2 == 0; n /= 2)
        factors.push_back(2);

    for (unsigned long long i = 3; i <= sqrt(n); i += 2)
        for (; n % i == 0; n /= i)
            factors.push_back(i);

    if (n > 2)
        factors.push_back(n);

    return factors;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie();

    int c;
    unsigned long long n;
    scanf("%d", &c);

    while (c--) {
        scanf("%llu", &n);
        vector<unsigned long long> f = get_factors(n);
        bool found = false;
        
        for (int i = 0; i < f.size(); i++)
            if ((f[i] - 3) % 4 == 0 && count(f.begin(), f.end(), f[i]) % 2 != 0)
                found = true;

        (found) ? printf("No\n") : printf("Yes\n");
    }
}