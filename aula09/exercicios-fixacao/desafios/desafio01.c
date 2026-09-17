#include <stdio.h>

long long fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    do {
        printf("Digite a posicao: ");
        scanf("%d", &n);
        if (n < 0) {
            printf("Numero invalido.\n");
        }
    } while (n < 0);
    printf("Numero da posicao %d: %lld\n", n, fibonacci(n));
    return 0;
}