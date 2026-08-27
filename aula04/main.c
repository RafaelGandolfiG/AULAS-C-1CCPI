#include <stdio.h>

void menu() {
    printf("------MENU------\n");
    printf("1-Calcular media\n2-Verificar presença\n3-Aprovacao\nEscolha: ");
}

float media_aritmetica(float n1, float n2) {
    // n1 e n2 sao as notas do aluno
    float media;
    float soma;
    soma = n1 + n2;
    media = soma / 2;
    return media;
}

void verifica_presenca(int p) {
    if (p > 100 || p < 0) {
        printf("presenca invalida\n");
    }
    else {
        if (p >= 75) {
            printf("Aluno esta com a presenca em dia\n");
        }
        else {
            printf("Aluno esta com a presenca pendente\n");
        }
    }
}

void verifica_aprovacao(float m) {
    if (m >= 6 && m <= 10) {
        printf("Aluno aprovado\n");
    }
    else if (m >= 4 && m < 6) {
        printf("Aluno em recuperacao\n");
    }
    else {
        printf("Aluno reprovado\n");
    }
}

int main() {

    int opcao;
    printf("Digite a opcao: ");
    scanf("%d", &opcao);
    switch (opcao) {
    case 1:
        printf("Selecionado opcao 1;\n");
        break;
    case 2:
        printf("Selecionado opcao 2;\n");
        break;
    default:
        printf("Opcao invalida\n");
    }

    int opcao;
    float media;
    float nota1;
    float nota2;
    float soma = 0;
    int presenca;
    printf("------MENU------\n");
    printf("1-Calcular media\n2-Verificar presença\n3-Aprovacao\nEscolha: ");
    scanf("%d", &opcao);
    switch (opcao) {
    case 1:
        printf("Digite a nota 1: ");
        scanf("%f", &nota1);
        printf("Digite a nota 2: ");
        scanf("%f", &nota2);
        soma = nota1 + nota2;
        media = soma / 2;
        printf("A media das notas e: %.2f", media);
        // printf("A media das notas e: %.2f",media_aritmetica(nota1,nota2));
        break;
    case 2:
        printf("Digite a frequencia do aluno (0-100): ");
        scanf("%d", &presenca);
        if (presenca > 100 || presenca < 0) {
            printf("presenca invalida\n");
        }
        else {
            if (presenca >= 75) {
                printf("Aluno esta com a presenca em dia\n");
            }
            else {
                printf("Aluno esta com a presenca pendente\n");
            }
        }
        break;
        // verifica_presenca(presenca);
    case 3:
        printf("Digite sua media: ");
        scanf("%f", &media);
        if (media >= 6) {
            printf("Aluno aprovado\n");
        }
        else if (media >= 4 && media < 6) {
            printf("Aluno em recuperacao\n");
        }
        else {
            printf("Aluno reprovado\n");
        }
        break;
        // verifica_media(media);
    default:
        printf("Opcao invalida\n");
    }

    menu();

    return 0;
}