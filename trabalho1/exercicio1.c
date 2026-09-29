#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");

    int i, j, lin, col, maior_linha, menor_i, menor_j, menor_elemento, total_linha;


    do { // define o tamanho da linha com os limites entre 1 e 5
        printf("\nDefinir tamanho da Matriz [i] (1 a 5): ");
        scanf("%d", &i);
    } while (i < 1 || i > 5);

    do { // define o tamanho da coluna com os limites entre 1 e 5
        printf("\nDefinir tamanho da Matriz [j] (1 a 5): ");
        scanf("%d", &j);
    } while (j < 1 || j > 5);

    int matriz[i][j]; // cria a matriz depois de definir o tamanho

    for (lin = 0; lin < i; lin++) {  // define os valores da matriz
        for (col = 0; col < j; col++) {
            printf("Valor para a posição [%d][%d]: ", lin, col);
            scanf("%d", &matriz[lin][col]);
        }
    }

    printf("\nMatriz: \n"); // mostra a matriz
    for (lin = 0; lin < i; lin++) {
        for (col = 0; col < j; col++) {
            printf("\t%d", matriz[lin][col]);
        }
        printf("\n");
    }

    printf("\nMaior elemento de cada linha:\n");
    for (lin = 0; lin < i; lin++) {
        maior_linha = matriz[lin][0]; // comeca o maior elemento da linha como o primeiro 
        
        for (col = 0; col < j; col++) {
            if(matriz[lin][col] > maior_linha){
                maior_linha = matriz[lin][col]; // muda o maior elemento para o que for maior que o anterior definido
            } 
        }
        printf("Linha %d: %d\n", lin, maior_linha);
    }

    // a soma dos elementos de cada linha
    printf("\nSoma dos elemento de cada linha:\n");
    for (lin = 0; lin < i; lin++) { // passa para proxima linha
        int total_linha = 0; // total da linha atual
        for (col = 0; col < j; col++) { 
            total_linha += matriz[lin][col]; // adiciona a soma no total
        }
        printf("Soma da linha %d: %d\n", lin, total_linha);
    }
    // é a mesma lógica do maior elemento, porem invez de um if comparando os valores ele apenas soma e printa

    // um for que percorre a matriz inteira e compara o primeiro elemento com todos outros para ir achando o menos toda vez
    printf("\nMenor elemento da matriz:\n");
    menor_elemento = matriz[0][0];
    for (lin = 0; lin < i; lin++) {        
        for (col = 0; col < j; col++) {
            if (matriz[lin][col] < menor_elemento) {
                menor_elemento = matriz[lin][col]; // pega o valor
                menor_i = lin; // pega a posicao da linha
                menor_j = col; // pega a posicao da coluna
            } 
        }
    }
    printf("Elemento da matriz é: %d. E esta na posição: [%d] [%d]\n", menor_elemento, menor_i, menor_j);

}