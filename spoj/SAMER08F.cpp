#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); // Input and output become more efficient.
    cin.tie();

    int n;
    while (scanf("%d", &n), n != 0) {
        int res = 0;
        for (int i = n; i > 0; i--) res += i*i;
        
        printf("%d\n", res);
    }

}