#include <stdio.h>
#include <locale.h>

int media(){
    int num1, num2, num3, num4, media;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    printf("Digite o terceiro numero: ");
    scanf("%d", &num3);
    printf("Digite o quarto numero: ");
    scanf("%d", &num4);

    media = (num1+num2+num3+num4)/4;
    printf("Sua média é %d\n", media);

}

float area_triangulo(){
    float base, altura, area;

    printf("Digite a base do triangulo: ");
    scanf("%f", &base);
    printf("Digite a altura do triangulo: ");
    scanf("%f", &altura);

    area = (base*altura)/2;
    printf("A area desse triangulo é %.2f \n", area);

}

float desconto(){
    float mercadoria, desconto, valor_desconto;

    printf("Digite o valor da mercadoria: ");
    scanf("%f", &mercadoria);
    printf("Digite o valor do desconto: ");
    scanf("%f", &desconto);

    valor_desconto = mercadoria-((mercadoria*desconto)/100);
    printf("%.2f \n", valor_desconto);

}

int formula(){
    int a, b, c, x;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);
    printf("Digite o terceiro numero: ");
    scanf("%d", &c);

    x = 2*a*b + 3*a*c - 4*b*c;
    printf("Seguindo a formula a x = 2ab + 3ac – 4bc seu resultado é %d", x);

}

int trocar_lugares(){
    int a, b, substituto;

    printf("Digite o numero A: ");
    scanf("%d", &a);
    printf("Digite o numero B: ");
    scanf("%d", &b);

    substituto = a;
    a = b;
    b = substituto;

    printf("Seu A se tornou %d e seu B se tornou %d", a, b);
}

float area_quadrado(){
    float lado, perimetro, area;

    printf("Digite a lado do quadrado: ");
    scanf("%f", &lado);


    area = lado*lado;
    perimetro = 4 * lado;
    printf("A area desse quadrado é %.2f e o perimetro é %.2f \n", area, perimetro);
    
}

float media_aluno(){
    char nome[50];
    float nota1, nota2, media;

    printf("Digite o nome do aluno: ");
    scanf("%s", nome);
    printf("Digite a primeira nota do aluno %s: ", nome);
    scanf("%f", &nota1);
    printf("Digite a segunda nota do aluno %s: ", nome);
    scanf("%f", &nota2);

    media = (nota1+nota2)/2;
    printf("A média do aluno %s é: %.2f", nome, media);
}

void main(){
    setlocale(LC_ALL, "Portuguese");
    media();
    area_triangulo();
    desconto();
    formula();
    trocar_lugares();
    area_quadrado();
    media_aluno();
}