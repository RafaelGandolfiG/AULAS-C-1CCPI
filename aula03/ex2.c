#include <stdio.h>

int main() {
    int numero=1;
    int soma=0;
    while (numero!=0){
        printf("Digite um numero: ");
        scanf("%d",&numero);
        soma=soma+numero;
    }
    printf("%d",soma);
    return 0;
}