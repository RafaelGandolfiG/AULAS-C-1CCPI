#include <stdio.h>

void contagem(int n) {
    if (n == 0) {
        printf("FIM\n");
        return;
    }
    printf("%d\n", n);
    contagem(n - 1);
}

int main() {
    contagem(5);
    return 0;
}