#include <stdio.h>

int main() {
    int tamanho;
    int lista[9];
    int linha;
    int coluna;
    int soma;
    int k;

    k=0;
    soma=0;
    linha=3;
    coluna=3;
    tamanho=0;

    for (int i=1;i<10;i++){
        printf("Digite o numero %d: ",i);
        scanf("%d",&lista[tamanho]);
        tamanho++;
    }

    for (int i=0;i<3;i++){
        for (int j=0; j<3; j++){
            printf("%d",lista[k]);
            if (i==j){
                soma+=lista[k];
            }
            k++;
        }
        printf("\n");
    }

    printf("%d",soma);
    
    return 0;
}