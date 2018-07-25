#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie();

    int t, n;
    scanf("%d", &t);

    while (t--) {
        scanf("%d", &n);
        (n % 2 == 0) ? printf("Thankyou Shaktiman\n") : printf("Sorry Shaktiman\n");
    }

}