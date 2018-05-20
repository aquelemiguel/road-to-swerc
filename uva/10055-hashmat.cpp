#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); // Input and output become more efficient.
    cin.tie();

    long long hashmat, enemy;

    while (scanf("%lld %lld", &hashmat, &enemy) != EOF) {
        printf("%lld\n", abs(enemy - hashmat));
    }
}