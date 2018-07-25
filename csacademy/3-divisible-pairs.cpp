#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie();

    int n, elem;
    cin >> n;
    vector<long> freq {0, 0, 0};

    for (int i = 0; i < n; i++) {
        cin >> elem;
        freq[elem % 3]++;
    }
    
    cout << (freq[0] * (freq[0] - 1) / 2) + (freq[1] * freq[2]);
}