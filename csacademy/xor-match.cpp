#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie();

    int n, m, e, res = 0;
    vector<int> a, b;
    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++) {
        scanf("%d", &e); a.push_back(e);
    }

    for (int i = 0; i < m; i++) {
        scanf("%d", &e); b.push_back(e);
    }

    if (n > m) 
        a.swap(b);

    for (int i = 0; i < b.size() - a.size() + 1; i++) {
        bool confirmed = true;

        for (int j = 0; j < a.size(); j++) {
            if (a[j] == b[i+j]) confirmed = false;
        }
        if (confirmed) res++;
    }

    printf("%d\n", res);
}