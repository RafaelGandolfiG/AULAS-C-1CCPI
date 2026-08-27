#include <stdio.h>

void exibir_vetor(int vetor[], int tamanho) {
    int valor;
    for (int i = 0; i < tamanho; i++) {
        valor = vetor[i];
        printf("o indice %d tem o valor: %d\n", i, valor);
    }
}

int main() {
    int valores[3] = {1, 2, 3};
    for (int i = 0; i < 3; i++) {
        int valor = valores[i];
        printf("%d\n", valor);
    }

    int valor;
    for (int i = 0; i < 3; i++) {
        valor = valores[i];
        printf("o indice %d tem o valor: %d\n", i, valor);
    }

    int tamanho;
    printf("Digite o tamanho da lista: ");
    scanf("%d", &tamanho);
    int lista[tamanho];
    for (int i = 0; i < tamanho; i++) {
        printf("Digite um numero: ");
        scanf("%d", &lista[i]);
    }
    for (int i = 0; i < tamanho; i++) {
        printf("%d\n", lista[i]);
    }

    int tamanho;
    int lista[3] = {1, 2, 3};
    tamanho = sizeof(lista) / sizeof(lista[0]);
    exibir_vetor(lista, tamanho);

    int quantidade;
    printf("Digite a quantidade de notas: ");
    scanf("%d", &quantidade);
    float notas[quantidade];
    float soma = 0;
    for (int i = 0; i < quantidade; i++) {
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }
    printf("A media do aluno é: %.2f", soma / quantidade);
    return 0;
}