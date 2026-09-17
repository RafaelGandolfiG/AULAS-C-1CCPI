#include <stdio.h>

void misterio(int n) {
    if (n <= 0) {
        return 0;
    }
    printf("%d ", n);
    misterio(n - 2);
    printf("%d ", n);
}

int main() {
    misterio(5);
    return 0;
}