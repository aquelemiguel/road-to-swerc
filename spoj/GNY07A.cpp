#include <iostream>
#include <stdio.h>
#include <string>

int main() {
    int tests, iter = 1;

    for (scanf("%d", &tests); tests > 0; tests--, iter++) {
        int index;
        std::string word;

        std::cin >> index >> word;
        word.erase(index - 1, 1);

        std::cout << iter << " " << word << std::endl;
    }

}