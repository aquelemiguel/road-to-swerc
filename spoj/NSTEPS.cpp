#include <bits/stdc++.h>
using namespace std;

int formula(int x, int y) {
    return (x % 2 == 0) ? x+y : x+y - 1;
} 

int main() {
    ios::sync_with_stdio(0); // Input and output become more efficient.
    cin.tie();

    int n, x, y;
    scanf("%d", &n);

    while (n--) {
        scanf("%d %d", &x, &y);

        if (x == y || (x != y && x-2 == y))
            printf("%d\n", formula(x, y));
        else
            printf("No Number\n");
    }
}