#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie();

    int t, n;
    long long x, y;
    scanf("%d", &t);

    while (t--) {
        scanf("%d", &n);
        vector<pair<long long, long long>> vp;
        int res = 0;

        for (int i = 0; i < n; i++) {
            scanf("%lld %lld", &x, &y);
            vp.push_back(make_pair(x, y));
        }

        for (int i = 0; i < n; i++) {
            int count = 0;

            for (int j = 0; j < n; j++)
                if (vp[i].first >= vp[j].first && vp[i].first < vp[j].second) 
                    count++;

            res = (count > res) ? count : res;
        }

        printf("%d\n", res);
    }
}