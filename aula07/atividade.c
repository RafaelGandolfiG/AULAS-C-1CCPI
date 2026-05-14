#include <stdio.h>
#include <string.h>

int main() {
    char matriz[10][30];
    for (int i=0; i<10;i++){
        printf("Digite o produto numero %d: ",i+1);
        scanf("%s",&matriz[i]);
    }
    char produto[30];
    int achou;
    do{
        achou=0;
        printf("Digite um nome de produto: ");
        scanf("%s",&produto);
        for (int i=0; i<10; i++){
            if (strcmp(produto, matriz[i])==0){
                achou=1;
            }
        }
        if (achou==1){
            printf("Produto encontrado\n");
        }
        else{
            printf("Produto não encontrado\n");
        }
    } while (achou==0);
    return 0;
}