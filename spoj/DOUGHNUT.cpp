#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int tests;
    
    for (scanf("%d", &tests); tests > 0; tests--) {
        int cats, capacity, weight;
        scanf("%d %d %d", &cats, &capacity, &weight);

        (cats * weight > capacity) ? printf("no\n") : printf("yes\n");  
    }

}