#include <stdio.h>

int maior(int v[], int n) {
    if (n == 1) {
        return v[0];
    }
    int anterior = maior(v, n - 1);
    if (v[n - 1] > anterior) {
        return v[n - 1];
    }
    return anterior;
}

int main() {
    int vetor[] = {10, 20, 30, 40, 50};
    printf("O maior numero do vetor eh: %d", maior(vetor, 5));
    return 0;
}