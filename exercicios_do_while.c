#include <stdio.h>
#include <locale.h>
#include <math.h>

void ler_characteres(){
    int contador = 1;
    char character;
    do{
        printf("Digite um character: ");
        scanf(" %c", &character);
        contador++;
    }while (contador <= 35 && character != '$');
}

void numeros_inteiros(){
    int soma = 0, n;

    do{
        printf("Digite um numero inteiro: ");
        scanf("%d", &n);

        soma = soma + n;

    }while (n > 0);
    printf("A soma de todos numeros digitados é: %d ", soma);
}


// 1 soma de 2 valores
// 2 encontrar o maior numero de 3 numeros
// 3 fatorial de X
// 4 calcular o valor de a**b
void menu() {
    int opcao;
    float num1_real, num2_real; 
    int a, b, c, maior;
    int x, i;
    
    // CORREÇÃO: Declarado como long long int para bater com o %lld e evitar estouro
    long long int fat; 
    
    double base, expoente, resultado_pot;

    do {
        printf("\n----- Menu -----\n");
        printf("[1] Somar 2 valores reais\n");
        printf("[2] Encontrar o maior de 3 numeros\n");
        printf("[3] Fatorial de X\n");
        printf("[4] Calcular o valor de a^b\n");
        printf("[0] Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("\nDigite dois valores reais: ");
                scanf("%f%f", &num1_real, &num2_real);
                printf("Soma: %.2f\n", num1_real + num2_real);
                break;

            case 2:
                printf("\nDigite 3 numeros inteiros: ");
                scanf("%d%d%d", &a, &b, &c);
                if (a >= b && a >= c) {
                    maior = a;
                } else if (b >= c) {
                    maior = b;
                } else {
                    maior = c;
                }
                printf("O maior numero e: %d\n", maior);
                break;

            case 3:
                printf("\nDigite o valor de X (inteiro nao negativo): ");
                scanf("%d", &x);
                if (x < 0) {
                    printf("Nao existe fatorial de numero negativo.\n");
                } else {
                    fat = 1;
                    for (i = 1; i <= x; i++) {
                        fat *= i;
                    }
                    printf("Fatorial de %d e: %lld\n", x, fat);
                }
                break;

            case 4:
                printf("\nDigite a base (a) e o expoente (b): ");
                scanf("%lf%lf", &base, &expoente);
                resultado_pot = pow(base, expoente);
                printf("%.2f elevado a %.2f e: %.2f\n", base, expoente, resultado_pot);
                break;

            case 0:
                printf("\nSaindo do programa...\n");
                break;

            default:
                printf("\nOpcao invalida! Tente novamente.\n");
        }
    } while (opcao != 0);
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    ler_characteres();
    numeros_inteiros();
    menu();
    return 0;
}