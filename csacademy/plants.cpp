#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie();

    int n, m, ai, bi, room[100];
    scanf("%d %d", &n, &m);

    for (int i = 0; i < m; i++)
        scanf("%d", &room[i]);

    for (int i = 0; i < n; i++) {
        int count = 0;
        scanf("%d %d", &ai, &bi);
        
        for (int j = 0; j < m; j++)
            if (ai <= room[j] && bi >= room[j]) count++;

        printf("%d\n", count);
    }
}