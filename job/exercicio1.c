#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");

    int i, j, lin, col, maior_linha;

    do {
        printf("\nDefinir tamanho da Matriz [i] (1 a 5): ");
        scanf("%d", &i);
    } while (i < 1 || i > 5);

    do {
        printf("\nDefinir tamanho da Matriz [j] (1 a 5): ");
        scanf("%d", &j);
    } while (j < 1 || j > 5);

    int matriz[i][j];

    for (lin = 0; lin < i; lin++) {
        for (col = 0; col < j; col++) {
            printf("Valor para a posição [%d][%d]: ", lin, col);
            scanf("%d", &matriz[lin][col]);
        }
    }

    printf("\nMatriz: \n");
    for (lin = 0; lin < i; lin++) {
        for (col = 0; col < j; col++) {
            printf("\t%d", matriz[lin][col]);
        }
        printf("\n");
    }

    printf("\nMaior elemento de cada linha:\n");
    for (lin = 0; lin < i; lin++) {
        maior_linha = matriz[lin][0]; 
        
        for (col = 1; col < j; col++) {
            if(matriz[lin][col] > maior_linha){
                maior_linha = matriz[lin][col];
            } 
        }
        printf("Linha %d: %d\n", lin, maior_linha);
    }

}