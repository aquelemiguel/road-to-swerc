#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie();

    string s;
    pair<int,int> c(0, 0);
    getline(cin, s);

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'N') c.first++;
        if (s[i] == 'S') c.first--;
        if (s[i] == 'E') c.second++; 
        if (s[i] == 'W') c.second--;
    }

    printf("%d\n", abs(c.first) + abs(c.second));
}