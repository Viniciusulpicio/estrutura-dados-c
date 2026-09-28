#include <stdio.h>
#include <locale.h>

void media() {
    float nota1, nota2, nota3, resultado;
    
    printf("\nDigite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);
    
    resultado = (nota1 + nota2 + nota3) / 3.0;
    printf("A média das três notas é: %.2f\n", resultado);
}

void area() {
    float aresta, area_total;
    
    printf("\nDigite o valor da aresta do cubo: ");
    scanf("%f", &aresta);
    
    if (aresta < 0) {
        printf("Erro: A aresta não pode ser negativa.\n");
        return;
    }
    
    area_total = 6.0 * (aresta * aresta);
    printf("A área total do cubo é: %.2f\n", area_total);
}

void fatorial() {
    int numero, resultado = 1;
    
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);
    
    if (numero < 0) {
        printf("Erro: Não existe fatorial de número negativo.\n");
        return;
    }
    
    for (int i = 1; i <= numero; i++) {
        resultado *= i;
    }
    
    printf("O fatorial de %d é: %d\n", numero, resultado);
}

int main() {
    int opcao;
    setlocale(LC_ALL, "Portuguese");
    
    do {
        printf("\n*** Menu ***\n");
        printf("[1] Média\n");
        printf("[2] Área do cubo\n");
        printf("[3] Fatorial\n");
        printf("[0] Sair do programa\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        
        switch (opcao) {
            case 1:
                media();
                break;
            case 2:
                area();
                break;
            case 3:
                fatorial();
                break;
            case 0:
                printf("\nPrograma finalizado com sucesso.\n");
                break;
            default:
                printf("\nOpção inválida! Tente novamente.\n");
        }
    } while (opcao != 0);
    
    return 0;
}
