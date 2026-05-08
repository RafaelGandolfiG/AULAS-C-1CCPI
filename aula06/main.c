#include <stdio.h>
#include <string.h>

int main() {
    char nome[30];
    printf("Digite seu nome completo: ");
    //scanf("%s",&nome);
    fgets(nome,30,stdin);
    int tamanho_antes=strlen(nome);
    nome[strcspn(nome, "\n")]='\0';
    int tamanho_depois=strlen(nome);
    printf("Tamanho do nome antes da funcao strcspn %d\n", tamanho_antes);
    printf("Tamanho do nome depois da funcao strcspn %d\n", tamanho_depois);
    
    printf("ola, %s\n\n",nome);
    char nome_2[20];
    strcpy(nome_2,nome);
    nome_2[strcspn(nome, "\n")]='\0';
    int tamanho_nome=strcspn(nome, "\n");
    printf("%d\n", tamanho_nome);
    printf("Como posso te ajudar %s\n\n",nome_2);
    
    char msg[50]="o que voce gostaria? ";
    printf("%s %s\n", nome_2,msg);
    puts(nome_2);
    puts(msg);
    
    int comp_strcmp, comp_str;
    char nome_3[20];
    printf("digite seu nome: ");
    scanf("%s",&nome_3);
    comp_strcmp=strcmp(nome_2,nome_3);
    printf("%d\n",comp_strcmp);
    comp_str=nome_2==nome_3;
    printf("%d\n",comp_str);
    
    return 0;
}