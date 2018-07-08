#include <bits/stdc++.h>
using namespace std;

map<int, int> res;

bool in_alpha(char left, char right) {
    return (10 * (left - '0') + (right - '0') <= 26);
}

int dp(string code) {
    for (int i = 0; i <= code.length(); i++) {
        if (i == 0 || i == 1)
            res[i] = 1;

        else if (code[i-1] == '0')
            if (in_alpha(code[i-2], code[i-1]) && res[i-1] > 1)
                res[i] = res[i-2];

            else if (in_alpha(code[i-2], code[i-1] && res[i-1] == 1))
                res[i] = 1;

            else
                return 0;

        else if (code[i-2] == '0')
            res[i] = res[i-1];

        else if (in_alpha(code[i-2], code[i-1]))
            res[i] = res[i-1] + res[i-2];

        else
            res[i] = res[i-1];
    }
    return res[code.length()];
}

int main() {
    ios::sync_with_stdio(0); // Input and output become more efficient.
    cin.tie();

    string code;

    while (getline(cin, code), code != "0") {
        printf("%d\n", dp(code));
        res.clear();
    }
}