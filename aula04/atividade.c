// importando a lib
#include <stdio.h>

// criando uma função para converter para celsius
float celsius(float temp){
    // temp é a temperatura
    // declarando o resultado
    float final;
    // formula de transformação
    final=(temp-32)*5/9;
    // retornar o resultado
    return final;
}

// criando uma função para convrter para farenheit
float farenheit(float temp){
    // temp é a temperatura
    // declarando o resultado
    float final;
    // formula de transformação
    final=(temp*9/5)+32;
    // retornar o resultado
    return final;
}

// função main
int main() {
    // declarando as variaveis
    int escolha;
    float temperatura;
    float final;
    // menu
    printf("------MENU------\n");
    //pede uma escolha
    printf("1-Transormar para Celsius\n2-Transformar para Farenheit\nEscolha: ");
    // le a escolha
    scanf("%d",&escolha);
    // switch da variavel escolha
    switch(escolha){
        // caso seja 1
        case 1:
            // pede a temperatura
            printf("Digite a temperatura em Farenheit: ");
            // le a temperatura
            scanf("%f",&temperatura);
            // mostra o resultado final chamando a função de conversão
            printf("Temperatura em Celsius %.2f\n",celsius(temperatura));
            // break
            break;
        //caso seja 2
        case 2:
            // pede a temperatura
            printf("Digite a temperatura em Celsius: ");
            // le a temperatura
            scanf("%f",&temperatura);
            // mostra o resultado final chamando a função de conversão
            printf("Temperatura em Farenheit: %.2f\n",farenheit(temperatura));
            break;
        // caso não seja nem 1 ou nem 2
        default:
        // mostra que a opção é invalida
            printf("Opção invalida");
    }
    // retorno de main
    return 0;
}