#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie();

    int t, n;
    scanf("%d", &t);

    while (t--) {
        int set, scope = 1, index, a, b;
        scanf("%d", &n);

        for (set = 1; n >= scope; set++)
            scope += set;
        
        index = n - (scope - set) - 1;

        if ((set - 1) % 2) {
            a = (set-1) - index; b = 1 + index;
        } else {
            a = 1 + index; b = (set-1) - index;
        }

        printf("TERM %d IS %d/%d\n", n, a, b);
    }
}