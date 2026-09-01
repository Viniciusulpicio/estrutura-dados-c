#include <stdio.h>
#include <locale.h>

void maior_valor(){
    int matrix[4][3], lin, col, maior = 0;

    for (lin = 0; lin < 4; lin++){
        for(col = 0; col < 3; col++){
            printf("Entre com o valor: ");
            scanf("%d", &matrix[lin][col]);
            if(matrix[lin][col] > maior){
                maior = matrix[lin][col];
            }

        }
    }
    printf("O maior valor digitado é: %d", maior);
}

void diagonal_principal(){
    int matrix[5][5], lin, col, soma = 0;

    for (lin = 0; lin < 5; lin++){
        for(col = 0; col < 5; col++){
            printf("Entre com o valor: ");
            scanf("%d", &matrix[lin][col]);
            if( lin == col ){
                soma = soma + matrix[lin][col];
            }

        }
    }
    printf("A soma da diagonal principal é: %d", soma);
}

void multiplicacao_matriz(){
    int matrix[5][6], lin, col, soma = 0;

    for (lin = 0; lin < 5; lin++){
        for(col = 0; col < 6; col++){
            printf("Entre com o valor: ");
            scanf("%d", &matrix[lin][col]);

            soma = soma + (matrix[lin][col]*4);
            

        }
    }

    printf("\nA matriz multiplicada por 4 é:\n");
    for (lin = 0; lin < 5; lin++){
        for(col = 0; col < 6; col++){
            printf("%4d ", matrix[lin][col] * 4);            

        }
        printf("\n");
    }
    printf("\nA soma de todos os elementos multiplicados por 4 é: %d\n", soma); 

}

void main(){
    setlocale(LC_ALL, "Portuguese");
    maior_valor();
    diagonal_principal();
    multiplicacao_matriz();
}