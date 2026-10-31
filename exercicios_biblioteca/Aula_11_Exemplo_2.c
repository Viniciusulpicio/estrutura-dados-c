#include <stdio.h>
#include <locale.h>
#include "bib.h"

int main() {
    setlocale(LC_ALL, "Portuguese");

    int num;

    printf("Digite um número: ");
    fflush(stdout);
    scanf("%d", &num);
    if (verifica_par(num) == 0)
        printf("\nO número é par \n");
    else
        printf("\nO número é ímpar \n");

    return 0;
}
