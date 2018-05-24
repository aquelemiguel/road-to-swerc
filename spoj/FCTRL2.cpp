#include <bits/stdc++.h>
using namespace std;

#define MAX 500

int multiply(int x, int res[], int res_size);

// Finds factorials of large numbers and prints them.
void factorial(int n) {
    int res[MAX], res_size = 1;
    res[0] = 1;

    for (int i = 2; i <= n; i++)
        res_size = multiply(i, res, res_size);

    for (int i = res_size - 1; i >= 0; i--)
        printf("%d", res[i]);
}

int multiply(int x, int res[], int res_size) {
    int carry = 0;

    for (int i = 0; i < res_size; i++) {
        int prod = res[i] * x + carry;
        res[i] = prod % 10;
        carry = prod / 10;
    }

    while (carry) {
        res[res_size] = carry % 10;
        carry /= 10;
        res_size++;
    }

    return res_size;
}

int main() {
    ios::sync_with_stdio(0); // Input and output become more efficient.
    cin.tie();

    int tests;
    scanf("%d", &tests);

    while (tests--) {
        int n;
        scanf("%d", &n);

        factorial(n);
        printf("\n");
    }

}