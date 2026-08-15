#include <stdio.h>
#include <locale.h>

int maior_menor(){
    int num1, num2, num3, num4, num5, media, maior, menor, soma;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    printf("Digite o terceiro numero: ");
    scanf("%d", &num3);
    printf("Digite o quarto numero: ");
    scanf("%d", &num4);
    printf("Digite o quinto numero: ");
    scanf("%d", &num5);

    media = (num1+num2+num3+num4+num5)/5;
    printf("Sua média é %d\n", media);
    soma = num1+num2+num3+num4+num5;
    printf("A soma de todos numeros é %d\n", soma);

    maior = num1;
    menor = num1;

    if (num2 > maior)
        maior = num2;
    if (num2 < menor)
        menor = num2;
    if (num3 > maior)
        maior = num3;
    if (num3 < menor)
        menor = num3;
    if (num4 > maior)
        maior = num4;
    if (num4 < menor)
        menor = num4;
    if (num5 > maior)
        maior = num5;
    if (num5 < menor)
        menor = num5;

    printf("Seu maior numero é é %d\n", maior);
    printf("Seu menor numero é é %d\n", menor);
}

float divisao(){
    float num1, num2, divisao;

    printf("Digite o primeiro valor: ");
    scanf("%f", &num1);
    printf("Digite o segundo valor: ");
    scanf("%f", &num2);

    if (num2 == 0)
        printf("A divisão não pode ser igual a zero ");
    else {
        divisao = num1/num2;
        printf("O resultado da divisão é %.2f", divisao);
    }
}

int par_impar(){
    int num1, resto;

    printf("Digite um numero: ");
    scanf("%d", &num1);

    resto = num1%2;

    if (resto == 0) printf("O valor é par!");
    else printf("O valor é impar");
}

float notas(){
    float nota1, nota2, media, exame;

    printf("Digite a primeira nota do aluno: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota do aluno: ");
    scanf("%f", &nota2);

    media = (nota1+nota2)/2;

    if (media >= 7) printf("Aprovado!");
    else if (media <= 3) printf("Reprovado!");
    else{
        exame = 10 - media;
        printf("O aluno esta de exame e precisa tirar %.2f no exame", exame);
    }

}

float ir(){
    float salario;

    printf("Digite o salario: ");
    scanf("%f", &salario);

    if (salario <= 2428.80) printf("Alíquota de 0%%");
    else if (salario >= 2428.81 && salario <= 2826.65) printf("Alíquota de 7.5%%");
    else if (salario >= 2826.66 && salario <= 3751.05) printf("Alíquota de 15.0%%");
    else if (salario >= 3751.06 && salario <= 4664.68) printf("Alíquota de 22.5%%");
    else if (salario >= 4664.68) printf("Alíquota de 27.5%%");
}

void main(){
    setlocale(LC_ALL, "Portuguese");
    maior_menor();
    divisao();
    par_impar();
    notas();
    ir();
}