#include <stdio.h>
#include <locale.h>


typedef struct{
    char nome[50], ra[7];
    float media;
}t_aluno;


void exercicio1(){
    t_aluno vetor_alunos[10];
    int i, i_maior, i_menor;
    float maior = -1, menor = 11;

    for (i = 0; i < 10; i++){
        printf("\nDigite o nome do Aluno: ");
        gets(vetor_alunos[i].nome);
        printf("Informe o RA: ");
        gets(vetor_alunos[i].ra);
        printf("Informe a média: ");
        scanf("%f", &vetor_alunos[i].media);
        getchar();
    }

    for(i = 0; i < 10; i++){
        if (vetor_alunos[i].media > maior){
            maior = vetor_alunos[i].media;
            i_maior = i;
        }
    }

    for(i = 0; i < 10; i++){
        if (vetor_alunos[i].media < menor){
            menor = vetor_alunos[i].media;
            i_menor = i;
        }
    }

    printf("\nO nome do aluno com a maior média é: %s", vetor_alunos[i_maior].nome);
    printf("\nO ra do aluno com a menor média é: %s", vetor_alunos[i_menor].ra);

}

typedef struct {
    char nome[50], endereco[100], telefone[13], email[55];
}t_agenda;


void exercicio2(){
    t_agenda vetor_agenda[5];
    int i, total = 0, j = 0, entrada;

    for(i = 0; i < 100; i++){
        printf("\nPara parar o programa digite '0' para parar ou '1' para continuar: ");
        scanf("%d", &entrada);
        getchar();
        if(entrada == 0){
            break;
        }else{
            printf("\nDigite o nome: ");
            gets(vetor_agenda[i].nome);
            printf("Digite o endereço: ");
            gets(vetor_agenda[i].endereco);
            printf("Digite o telefone: ");
            gets(vetor_agenda[i].telefone);
            printf("Digite o email: ");
            gets(vetor_agenda[i].email);
            total++;
        }
    }

    while(j < total){
        printf("Nome: %s \t", vetor_agenda[j].nome);
        printf("Endereço: %s \t", vetor_agenda[j].endereco);
        printf("Telefone: %s \t", vetor_agenda[j].telefone);
        printf("Email: %s \t", vetor_agenda[j].email);
        printf("\n");
        j++;
    }
}


void main(){
    setlocale(LC_ALL, "Portuguese");
    //exercicio1();
    exercicio2();
}