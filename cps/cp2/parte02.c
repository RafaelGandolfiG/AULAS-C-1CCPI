#include <stdio.h>

int somaVetor(int vetor[], int n)
{
    if (n == 0)
    {
        return 0;
    }

    return vetor[n - 1] + somaVetor(vetor, n - 1);
}

int maiorVetor(int vetor[], int n)
{
    if (n == 1)
    {
        return vetor[0];
    }

    int anterior = maiorVetor(vetor, n - 1);

    if (vetor[n - 1] > anterior)
    {
        return vetor[n - 1];
    }

    return anterior;
}

int main(void)
{
    int vetor[] = {10, 25, 7, 42, 18};
    int n = 5;

    int soma = somaVetor(vetor, n);
    int maior = maiorVetor(vetor, n);

    printf("Soma dos elementos: %d\n", soma);
    printf("Maior elemento: %d\n", maior);

    return 0;
}
