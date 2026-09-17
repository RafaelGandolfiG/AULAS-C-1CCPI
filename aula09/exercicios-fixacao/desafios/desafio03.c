#include <stdio.h>

int somaPares(int v[], int n) {
    if (n == 0) {
        return 0;
    }

    if (v[n - 1] % 2 == 0) {
        return v[n - 1] + somaPares(v, n - 1);
    }
    return somaPares(v, n - 1);
}

int main() {
    int v[] = {1, 2, 3, 4, 5};
    printf("%d", somaPares(v, 5));
    return 0;
}