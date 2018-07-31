#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie();

    string n;
    int occ[10] = {0};
    getline(cin, n);

    for (int i = 0; i < n.size(); i++)
        occ[n[i] - '0']++;

    for (int i = 1; i < 10; i++) {
        if (occ[0] != occ[i]) {
            printf("0\n"); return 0;
        }
    }
    printf("1\n");

}