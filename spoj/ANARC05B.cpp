#include <bits/stdc++.h>
using namespace std;

#define MAX 10000

int main() {
    ios::sync_with_stdio(0); // Input and output become more efficient.
    cin.tie();

    int na, nb;
    int a[MAX], b[MAX];

    while (true) {
        scanf("%d", &na);
        if (na == 0) break;

        int res = 0, sa = 0, sb = 0;

        for (int i = 0; i < na; i++)
            scanf("%d", &a[i]);

        scanf("%d", &nb);
        for (int i = 0; i < nb; i++)
            scanf("%d", &b[i]);

        int i, j;
        for (i = 0, j = 0; i < na && j < nb;) {  
            if (a[i] < b[j]) {
                sa += a[i++];
            }
            else if (a[i] > b[j]) {
                sb += b[j++];
            }
            else {
                res += max(sa, sb) + a[i]; // a[i] is simply the intersection point.
                sa = 0, sb = 0;
                i++, j++;
            }
        }

        for (i; i < na; i++) // Iterate the possible remaining elements of the array.
            sa += a[i];

        for (j; j < nb; j++)
            sb += b[j];

        res += max(sa, sb);
        printf("%d\n", res);
    }

}