#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie();

    int a, b;
    scanf("%d %d", &a, &b);
    
    printf("%d", gcd(a, b));
}