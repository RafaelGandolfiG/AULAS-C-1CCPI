#include <stdio.h>

int main() {
    int numero;
    do{
        printf("Digite um numero: ");
        scanf("%d",&numero);
    }
    while (numero<0);
    printf("%d",numero);
    return 0;
}