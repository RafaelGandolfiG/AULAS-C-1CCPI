#include <stdio.h>

int somaVetor(int v[], int n) {
    if (n == 0) {
        return 0;
    }
    return v[n - 1] + somaVetor(v, n - 1);
}

int main() {
    int vetor[] = {1, 2, 3, 4, 5};
    printf("%d", somaVetor(vetor, 5));
    return 0;
}