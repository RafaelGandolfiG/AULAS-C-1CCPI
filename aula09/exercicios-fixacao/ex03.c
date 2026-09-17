#include <stdio.h>

long long potencia(int base, int exp) {
    if (exp == 0) {
        return 1;
    }
    return base * potencia(base, exp - 1);
}

int main() {
    printf("O resultado da potencia --> %lld.\n", potencia(2, 5));
    return 0;
}