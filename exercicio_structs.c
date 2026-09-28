#include <locale.h>
#include <stdio.h>
#include <string.h>

struct ficha_aluno {
    char nome[50];
    char ra[15];
    char cidade[50];
    float media;
};

void main() {
    setlocale(LC_ALL, "Portuguese");

    struct ficha_aluno alunos[3];
    float maior_media = -1;
    int i;

    for(i = 0; i < 3; i++) {
        printf("Nome do %dº aluno: ", i + 1);
        gets(alunos[i].nome);

        printf("RA do %dº aluno: ", i + 1);
        gets(alunos[i].ra);

        printf("Cidade do %dº aluno: ", i + 1);
        gets(alunos[i].cidade);

        printf("Média do %dº aluno: ", i + 1);
        scanf("%f", &alunos[i].media);
        getchar();
        printf("\n");

        if (alunos[i].media > maior_media) {
            maior_media = alunos[i].media;
        }
    }

    printf("Alunos que moram em marilia: \n");
    if (strcmp(alunos[0].cidade, "Marília") == 0 || strcmp(alunos[0].cidade, "marilia") == 0 || strcmp(alunos[0].cidade, "Marilia") == 0) {
        printf("- %s\n", alunos[0].nome);
    }
    if (strcmp(alunos[1].cidade, "Marília") == 0 || strcmp(alunos[1].cidade, "marilia") == 0 || strcmp(alunos[1].cidade, "Marilia") == 0) {
        printf("- %s\n", alunos[1].nome);
    }
    if (strcmp(alunos[2].cidade, "Marília") == 0 || strcmp(alunos[2].cidade, "marilia") == 0 || strcmp(alunos[2].cidade, "Marilia") == 0) {
        printf("- %s\n", alunos[2].nome);
    }
    printf("\n");

    printf("RA da maior média:");
    if (alunos[0].media == maior_media) {
        printf("- RA: %s (%s)\n", alunos[0].ra, alunos[0].nome);
    }
    if (alunos[1].media == maior_media) {
        printf("- RA: %s (%s)\n", alunos[1].ra, alunos[1].nome);
    }
    if (alunos[2].media == maior_media) {
        printf("- RA: %s (%s)\n", alunos[2].ra, alunos[2].nome);
    }

}
