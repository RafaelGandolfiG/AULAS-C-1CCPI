#include <stdio.h>

// variaveis globais, definições

int main() {

    int idade; // variável local

    printf("Digite sua idade: ");
    scanf("%d",&idade); // & direciona o valor para a variável declarada

    printf("Sua idade eh: %d anos \n",idade);

    int a=10;
    int b=3;
    
    printf("Soma: %d\n",a+b);
    printf("Subtracao: %d\n",a-b);
    printf("multiplicacao: %d\n",a*b);
    printf("divisao inteira: %d\n",a/b);
    printf("Resto: %d\n",a%b);

    int numero_1=10;
    float numero_2=3.0;

    printf("%.2f",(float)numero_1/numero_2);
    printf("%d",numero_1/(int)numero_2);

    int a = 10;
    int b = 5;
    
    printf("%d\n",a>b);
    printf("%d\n", a==b);

    int a=5;
    int b=3;

    int resultado=(a+b)>10;

    printf("%d\n",resultado);

    return 0;
}