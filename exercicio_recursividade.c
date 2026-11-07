#include <stdio.h>
#include <stdlib.h>

int soma(int n){
    if(n == 1){
        printf("1");
        return 1;
    }

    return n + soma(n-1);

}

int potencia (int a, int b){
    if (b == 0) {
        return 1;
    }

    return a * potencia(a, b - 1);
}

void main(){
    int a, b, opcao;

    printf("\n1. Soma \n2. Potencia \nEscolha a opção que deseja: ");
    scanf("%d", &opcao);

    if(opcao == 1){
        printf("\nDigite o valor que deseja somar: ");
        scanf("%d", &a);
        printf("\nResultado da soma: %d\n", soma(a));
    }else if(opcao == 2){
        printf("\nDigite a potencia: ");
        scanf("%d", &a);
        printf("\nDigite o elevado: ");
        scanf("%d", &b);
        printf("\nResultado da potencia de %d elevado a %d: %d\n", a, b,  potencia(a, b));
    }else{
        printf("Escolha uma opcao valida");
    }
}