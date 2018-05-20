#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); // Input and output become more efficient.
    cin.tie();

    int cases;
    scanf("%d", &cases);

    while (cases--) {
        int a, b;
        scanf("%d %d", &a, &b);

        string a_str = to_string(a), b_str = to_string(b);
        reverse(a_str.begin(), a_str.end());
        reverse(b_str.begin(), b_str.end());

        string res = to_string(stoi(a_str) + stoi(b_str));
        reverse(res.begin(), res.end());

        printf("%d\n", stoi(res));
    }

}