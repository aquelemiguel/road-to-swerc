#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie();

    string s, p;
    getline(cin, s);
    getline(cin, p);

    for (int i = 0; i < s.length(); i++)
        printf("%c", p[s[i] - 97]);

}