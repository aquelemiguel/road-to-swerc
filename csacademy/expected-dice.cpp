#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie();

    int d1[6], d2[6], prob[101] = {0}, max = 0, res;

    for (int i = 0; i < 12; i++)
        (i <= 5) ? scanf("%d", &d1[i]) : scanf("%d", &d2[i-6]);

    for (int i = 0; i < 6; i++)
        for (int j = 0; j < 6; j++)
            prob[d1[i] + d2[j]]++;
    
    for (int i = 1; i < 101; i++) {
        if (prob[i] > max) {
            max = prob[i]; res = i;
        }
    }

    printf("%d\n", res);
}