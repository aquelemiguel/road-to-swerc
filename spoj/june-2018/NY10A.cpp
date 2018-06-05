#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); // Input and output become more efficient.
    cin.tie();

    string seq;
    int p, n;
    cin >> p;

    while (p--) {
        cin >> n;
        cin.ignore();
        getline(cin, seq);

        int seqs[8] = {};   // Initialize array containing sequence count at 0.

        for (int i = 0; i < 38; i++) {
            string tiny = seq.substr(i, 3);

            if (tiny == "TTT") seqs[0]++;
            if (tiny == "TTH") seqs[1]++;
            if (tiny == "THT") seqs[2]++;
            if (tiny == "THH") seqs[3]++;
            if (tiny == "HTT") seqs[4]++;
            if (tiny == "HTH") seqs[5]++;
            if (tiny == "HHT") seqs[6]++;
            if (tiny == "HHH") seqs[7]++;
        }

        printf("%d ", n);

        for (int i = 0; i < 8; i++)
            printf("%d ", seqs[i]);
        
        printf("\n");
    }

}