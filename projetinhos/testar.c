#include <stdio.h>
#include <string.h>

void somar() {
    int n1;
    int n2;
    int soma;
    int c;
    printf("Digite o numero 1: ");
    if(scanf("%d", &n1) != 1){
        printf("Digite um numero\n");
        while((c = getchar()) != '\n' && c != EOF); 
        somar();
        return;
    }
    printf("Digite o numero 2: ");
    if(scanf("%d", &n2) != 1){
        printf("Digite um numero\n");
        while((c = getchar()) != '\n' && c != EOF); 
        somar();
        return;
    }
    soma = n1 + n2;
    printf("Soma = %d\n", soma);
}

int main() {
    char senhaCorreta[20];
    char senha[20];
    printf("Crie uma senha: ");
    scanf("%s",&senhaCorreta);
    while (1){
        printf("Digite a senha correta: ");
        scanf("%s",&senha);
        if (strcmp(senha,senhaCorreta)==0){
            printf("Entrando...\n");
            somar();
            break;
        }
        else{
            printf("Senha incorreta\n");
        }
    }
    return 0;
}