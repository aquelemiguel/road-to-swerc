#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie();

    int n, a[10];
    set<int> s;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (int i = 0; i < n; i++)
        for (int j = i+1; j < n; j++)
            s.insert(a[i] + a[j]);

    printf("%d\n", s.size());
}