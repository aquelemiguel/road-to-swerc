#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie();

    int n, s, res = 0;
    char d;
    scanf("%d", &n);

    vector<int> ls, rs;

    for (int i = 0; i < n; i++) {
        scanf("%d %c", &s, &d);
        (d == 'L') ? ls.push_back(s) : rs.push_back(s);
    }

    if (ls.size() > rs.size())
        ls.swap(rs);

    for (int i = 0; i < ls.size(); i++) {
        int j = find(rs.begin(), rs.end(), ls[i]) - rs.begin();

        if (j < rs.size()) {
            res++; rs.erase(rs.begin() + j); 
        }
    }

    printf("%d", res);
}