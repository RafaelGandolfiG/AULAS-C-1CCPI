#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef unsigned int uint;
typedef unsigned long ulong;

bool calcular(float media, float exame) {
    float total=(media+exame)/2;
    if(total>=6) {
        return true;
    }else{
        return false;
    }
}

typedef struct {
    char rua[50];
    uint numero;
    char bairro[50];
    char cidade[50];
} Endereco;

typedef struct {
    uint rm;
    char nome[50];
    float nota[3];
    bool aprovado;
    Endereco endereco;
} Aluno;

int main() {
    Aluno aluno[40];

    aluno[0].rm = 123456;
    strcpy(aluno[0].nome, "joao");
    strcpy(aluno[0].endereco.rua, "Rua Sao Joaquim");
    aluno[0].endereco.numero = 123;
    strcpy(aluno[0].endereco.bairro, "Paulista");
    strcpy(aluno[0].endereco.cidade, "Sao Paulo");

    printf("%s\n", aluno[0].nome);
    printf("%u\n", aluno[0].rm);
    printf("%s\n", aluno[0].endereco.rua);
    printf("%u\n", aluno[0].endereco.numero);
    printf("%s\n", aluno[0].endereco.bairro);
    printf("%s\n", aluno[0].endereco.cidade);

    aluno[0].nota[0]=10;
    aluno[0].nota[0]=8;
    aluno[0].nota[0]=9;

    int tamanho=sizeof(aluno[0].nota)/sizeof(aluno[0].nota[0]);
    float media = ((aluno[0].nota[0] + aluno[0].nota[1] + aluno[0].nota[2])/tamanho);

    if(media>=6) {
        aluno[0].aprovado=true;
    }else if(media>=4 && media<6) {
        printf("Aluno em exame\n");
        float exame;
        do {
            printf("Digite a nota do exame: ");
            scanf("%f",&exame);
        } while(exame>10 || exame<0);
        bool nota=calcular(media, exame);
        if(nota){
            aluno[0].aprovado=true;
        }
    }else {
        aluno[0].aprovado=false;
    }

    if(aluno[0].aprovado==true) {
        printf("Aluno aprovado\n");
    }else if(aluno[0].aprovado==false) {
        printf("Aluno reprovado\n");
    }else{
        printf("condicao nao reconhecida\n");
    }

    /*
        for (int i=0;i<3;i++) {
                printf("Digite a nota %d: ",i+1);
                scanf("%f", &aluno[0].nota[i]);
        }
    */

        return 0;
}