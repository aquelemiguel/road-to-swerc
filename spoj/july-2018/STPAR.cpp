#include <bits/stdc++.h>
using namespace std;

void empty_stack(stack<int> &s, int &expected) {
    for (int i = 0; i < s.size(); i++) {    // Empty the remainings of the stack.
        if (s.top() == expected) {
            s.pop(); expected++; i--;
        }
    }
}

int main() {
    ios::sync_with_stdio(0); // Input and output become more efficient.
    cin.tie();

    int n;
    while (scanf("%d", &n), n != 0) {
        int a[n], expected = 1;
        stack<int> s;

        for (int i = 0; i < n; i++)
            scanf("%d", &a[i]);

        for (int i = 0; i < n; i++) {   // Constantly try to insert elements from the top of the stack onto the street.
            if (a[i] == expected) expected++;
            else s.push(a[i]); 

            empty_stack(s, expected);
        }
        (expected > n) ? printf("yes\n") : printf("no\n");
    }
}