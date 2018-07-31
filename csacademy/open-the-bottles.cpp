#include <bits/stdc++.h>
using namespace std;

#define MAX 101

int main() {
    ios::sync_with_stdio(0);
    cin.tie();

    int e, sum = 0;

    for (int i = 0; i < 3; i++) {
        int min = MAX;

        for (int j = 0; j < 3; j++) {
            scanf("%d", &e);
            if (e < min) min = e;
        }
        sum += min;
    }

    printf("%d\n", sum);
}