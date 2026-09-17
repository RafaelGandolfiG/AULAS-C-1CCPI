#include <stdio.h>

int somatorio(int n) {
    if (n == 0) {
        return 0;
    }
    return n + somatorio(n - 1);
}

int main() {
    printf("%d", somatorio(5));
    return 0;
}