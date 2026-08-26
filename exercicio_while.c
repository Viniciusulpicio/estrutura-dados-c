#include <stdio.h>
#include <locale.h>

void ler_characteres(){
    int n, contador = 1;
    char character;

    printf("Digite o valor de N: ");
    scanf("%d", &n);

    while (contador <= n){
        printf("Digite seu character: ");
        scanf(" %c", &character);
        contador++;
    }
}

void poligono(){
    int n, contador = 1;
    float lado, soma = 0;

    printf("Digite o numero de lados: ");
    scanf("%d", &n);

    while (contador <= n){
        printf("Digite o %d lado do seu contador: ", contador);
        scanf("%f", &lado);

        soma = soma + lado;

        contador++;
    }
    printf("O perimetro do seu poligono é %.2f", soma);
}

//7
//Σ 3a² + A - 2
void somatorio(){
    int a = 1, soma = 0, n;

    while (a <= 7){
        n = 3 * a*a + a - 2;
        soma = soma + n;
        a++;
    }
    printf("O resultado do somatório é %d\n", soma);
}

void soma_numero(){
    int contador = 0, soma = 0;

    while (contador <= 100){
        soma = soma+contador;
        contador++;
    }
    printf("A soma dos numeros de 0 a 100 é: %d", soma);
}

void main(){
    setlocale(LC_ALL, "Portuguese");
    ler_characteres();
    poligono();
    somatorio();
    soma_numero();
}