#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie();

    int n, a, b, e;
    scanf("%d %d %d", &n, &a, &b);
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &e); (e == 1) ? a++ : a--;
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &e); (e == 1) ? b++ : b--;
    }

    if (a > b) printf("1");
    else if (a < b) printf("2"); 
    else printf("0");
}