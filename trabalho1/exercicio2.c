#include <stdio.h>
#include <locale.h>
#include <string.h>

typedef struct hamburguerias{
    char nome[100];
    float preco_hamburguer, preco_cerveja;
}t_hamburgueria;


void cadastrarHamburgueria(t_hamburgueria vetor_hamburgueria[], int i){

    printf("\nDigite o nome da hamburgueria (%d/15): ", i+1);
    gets(vetor_hamburgueria[i].nome);

    printf("\nDigite o preço do hambúrguer: (%d/15): ", i+1);
    scanf("%f", &vetor_hamburgueria[i].preco_hamburguer);

    printf("\nDigite o preço da cerveja artesanal: (%d/15): ", i+1);
    scanf("%f", &vetor_hamburgueria[i].preco_cerveja);

}

void informacoesCombo(t_hamburgueria vetor_hamburgueria[], int i){

    int j;
    float barato;
    char lugarBarato[100];
    
    barato = vetor_hamburgueria[0].preco_hamburguer + vetor_hamburgueria[0].preco_cerveja;
    strcpy(lugarBarato, vetor_hamburgueria[0].nome); // lugar barato recebe nome de index 0 do vetor
    for (j = 0; j < i; j++){ // Verifica qual é o menor preço de combo
        if (vetor_hamburgueria[j].preco_hamburguer + vetor_hamburgueria[j].preco_cerveja < barato){
            barato = vetor_hamburgueria[j].preco_cerveja + vetor_hamburgueria[j].preco_hamburguer;
            strcpy(lugarBarato, vetor_hamburgueria[j].nome);
        }
    }

    for (j = 0; j < i; j++){ // Printa todos os estabelecimentos que possuem o preço do combo igual ao mais barato (se houver mais de um)
        if (vetor_hamburgueria[j].preco_hamburguer + vetor_hamburgueria[j].preco_cerveja == barato){
            printf("\nO combo mais barato é: ");
            printf("Estabelecimento: %s | Preço do Combo: R$%.2f", vetor_hamburgueria[j].nome, vetor_hamburgueria[j].preco_cerveja + vetor_hamburgueria[j].preco_hamburguer);
    }
    }
}


void preco_medio(t_hamburgueria vetor_hamburgueria[], int i){
    
    float media = 0;
    int j = i;
    for (i = 0; i < j ; i++){
        media += vetor_hamburgueria[i].preco_hamburguer + vetor_hamburgueria[i].preco_cerveja;
    }
    media = media/i;
    printf("\nA média dos combos é: R$%.2f", media);
}

void main(){
    setlocale(LC_ALL, "Portuguese");
    t_hamburgueria vetor_hamburgueria[15];
    int opcao, i = 0; 
    

   do {
        printf("\n*** Menu ***\n");
        printf("[1] Cadastrar Hamburgueria\n");
        printf("[2] Informacoes de combos\n");
        printf("[3] Preco medio\n");
        printf("[0] Sair do programa\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        getchar();

        switch (opcao) {
            case 1:
            if (i == 15){
                printf("\nA lista está cheia.\n");
                break;
            }
            cadastrarHamburgueria(vetor_hamburgueria, i);
            i++;
            break;

            case 2:
            if (i == 0){
                printf("\nNenhuma hamburgueria foi cadastrada até o momento.\n");
                break;
            }

            informacoesCombo(vetor_hamburgueria, i);
            break;

            case 3:
            if (i == 0){
                printf("\nNenhuma hamburgueria foi cadastrada até o momento.\n");
                break;
            }

            preco_medio(vetor_hamburgueria, i);
            break;

            case 0:

            break;

            default:
                printf("\nTente novamente\n");
        }

    } while (opcao != 0);

}