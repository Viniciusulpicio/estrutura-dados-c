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
    float n1, n2, media, exame;

    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);

    media = (n1+n2) / 2;

    if(media >= 7){
        printf("Aprovado");
    }else if(media <= 3){
        printf("Reprovado");
    }else{
        exame = 10 - media;
        printf("A nota necessaria para o exame é: %.1f", exame);
    }

}

void aula3(){
    int i = 0;
    for (i = 0; i < 500; i++){
        if (i % 3 == 0){
            printf("%d \n", i);
        }

    }
}

void aula4(){
    int i = 0, soma = 0;

    while(i < 100){
        i++;
        soma += i;
    }
    printf("A soma dos valores é: %d", soma);
}

void aula6(){

}

void main(){
    setlocale(LC_ALL, "Portuguese");
    //aula1();
    //aula2();
    //aula3();
    //aula4();
    aula6();
}
































