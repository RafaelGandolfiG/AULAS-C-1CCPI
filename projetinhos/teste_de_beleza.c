#include <stdio.h>

int main() {
    int soma = 0;
    char resposta;
    char *perguntas[3] = {"Você é vaidoso? ", "Você tem um sorriso bonito? ", "Você tem um bom fisico? "};
    printf("Teste de beleza\n");
    for (int i = 0; i < 3; i++) {
        printf("%s", perguntas[i]);
        scanf(" %c", &resposta);
        if (resposta == 's') {
            soma = soma + 2;
        }
    }
    printf("Pontuação total %d\n", soma);
    if (soma < 4) {
        printf("Você é feio\n");
    }
    else if (soma < 6) {
        printf("Você é bonitinho\n");
    }
    else {
        printf("Você é lindo\n");
    }
    return 0;
}