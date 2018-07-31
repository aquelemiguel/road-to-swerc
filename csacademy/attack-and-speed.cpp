#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie();

    unsigned long long a, s, k, x, y;
    scanf("%llu %llu %llu %llu %llu", &a, &s, &k, &x, &y);

    double sol = (double) (s+k*y-a)/(x+y);

    (int(sol) == sol && sol >= 0 && sol <= k) ? printf("%d", int(sol)) : printf("-1");
}