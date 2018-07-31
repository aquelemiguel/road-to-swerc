#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie();

    int n, e, max = 0, luck = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &e);
        
        if (e > max) {
            max = e; luck++;
        }
    }

    printf("%d\n", luck);
}