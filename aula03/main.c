#include <stdio.h>

int main() {

    int idade = 18;
    if (idade >= 18) {
        printf("Maior de idade\n");
    }

    float nota1;
    float nota2;
    float soma;
    int falta;
    float media;

    printf("Digite a nota 1: ");
    scanf("%f", &nota1);
    printf("Digite a nota 2: ");
    scanf("%f", &nota2);
    printf("Falta: ");
    scanf("%d", &falta);

    soma = nota1 + nota2;
    media = soma / 2;

    printf("Nota 1: %.2f\n", nota1);
    printf("Nota 2: %.2f\n", nota2);
    printf("Media: %.2f\n", media);

    if (media >= 9 && falta >= 75) {
        printf("Excelente e aprovado\n");
    }
    else if (media >= 6 && falta >= 75) {
        printf("Aprovado\n");
    }
    else if (media < 6 && falta >= 75) {
        printf("Reprovado, media insuficiente\n");
    }
    else {
        printf("Reprovado, falta insuficiente\n");
    }

    for (int i = 0; i < 5; i++) {
        printf("%d\n", i);
    }

    int i = 0;
    while (i < 5) {
        printf("%d\n", i);
        i++;
    }

    do {
        printf("%d\n", i);
        i++;
    } while (i < 5);

    return 0;
}