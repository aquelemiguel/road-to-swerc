#include <iostream>
#include <cmath>

int main() {
    
    while (true) {
        int a, b, c;
        std::cin >> a >> b >> c;

        if (a + b + c == 0) break;

        if (a > b) std::swap(a, b);
        if (a > c) std::swap(a, c);
        if (b > c) std::swap(b, c);

        (sqrt(pow(a, 2) + pow(b, 2)) == c) ? std::cout << "right\n" : std::cout << "wrong\n";
    }

}