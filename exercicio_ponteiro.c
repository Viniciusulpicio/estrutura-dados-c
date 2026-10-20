#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[50];
    int ra;
    char cidade[30];
    float media;
} aluno;

int main() {
    setlocale(LC_ALL, "Portuguese");

    aluno *p;
    int i;

    p = malloc(3 * sizeof(aluno));

    for (i = 0; i < 3; i++) {       
        printf("\nDigite o nome: ");
        scanf("%s", p[i].nome);
        getchar();

        printf("Digite o RA: ");
        scanf("%d", &p[i].ra);
        getchar();

        printf("Digite a cidade: ");
        scanf("%c", p[i].cidade);
        getchar();

        printf("Digite a média: ");
        scanf("%f", &p[i].media);
        getchar();

    }

    int i_marilia = 0;
    
    for (i = 0; i < 3; i++) {
        if (strcmp(p[i].cidade, "Marília") == 0 || strcmp(p[i].cidade, "Marilia") == 0) {
            printf("- %s\n", p[i].nome);
            i_marilia = 1;
        }
    }
    if (!i_marilia) {
        printf("Nenhum aluno mora em Marília.\n");
    }

    
    for (i = 0; i < 3; i++) {
        if (p[i].media > 7.0) {
            printf("- RA: %d (Média do aluno: %.2f)\n", p[i].ra, p[i].media);
            encontrou_media = 1;
        }
    }
    if (!encontrou_media) {
        printf("Nenhum aluno atingiu média maior que 7.\n");
    }

    free(p);

    return 0;
}