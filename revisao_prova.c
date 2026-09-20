#include <stdio.h>
#include <locale.h>

void aula1(){
    int i;
    char nome[50];
    float n1, n2, media;

    printf("Digite o nome do aluno: ");
    scanf("%s", nome);

    printf("Digite a P1 do aluno: ");
    scanf("%f", &n1);
    printf("Digite a P2 do aluno: ");
    scanf("%f", &n2);

    media = (n1+n2) / 2;

    printf("O aluno %s ficou com média %.2f", nome, media);
    
}

void aula2(){
    
}

void main(){
    setlocale(LC_ALL, "Portuguese");
    //aula1();
    aula2();
}