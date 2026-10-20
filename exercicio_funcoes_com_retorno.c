#include <stdio.h>
#include <locale.h>

float fatorial(float x){ 
    int i; 
    float resultado = 1.0; 

    if(x < 0){ 
        return 0; 
    } else { 
        for(i = 1; i <= x; i++){ 
            resultado *= i;
        } 
        return resultado; 
    } 
}

float soma(int n){
    int i = 1;
    float soma_total = 0;
    
    if(n <= 0){
        return 0;
    } else {
        for (i = 1; i <= n; i++){
            soma_total += i;
        }
        return soma_total;
    }
}

void main(){
    setlocale(LC_ALL, "Portuguese");
    
    int input = 0;
    float x;
    int n;

    while(input != 3){
        printf("\n\n--- MENU ---");
        printf("\nPara fatorial digite: 1");
        printf("\nPara soma digite: 2");
        printf("\nPara sair digite: 3");
        printf("\nEscolha uma opção: ");
        scanf("%d", &input);

        if(input == 1){
            printf("\nDigite o valor para obter o fatorial: ");
            scanf("%f", &x);
            printf("Resultado do Fatorial: %.2f", fatorial(x));
            
        } else if(input == 2){
            printf("\nDigite o valor inteiro (N) para somar de 1 até N: ");
            scanf("%d", &n);
            printf("Resultado da Soma: %.2f", soma(n));
            
        } else if(input == 3){
            printf("\nSaindo do programa...");
            
        } else {
            printf("\nComando inválido! Tente novamente.");
        }
    }
}
