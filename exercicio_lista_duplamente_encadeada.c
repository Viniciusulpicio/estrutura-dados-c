#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

typedef struct no{
    int info;
    struct no *prox;
    struct no *ant;
} no;

no* inicializa(){
    return NULL;
}

no* insere_inicio(no *inicio, int valor) {
    no *novo = malloc(sizeof(no));
    novo->info = valor;
    novo->ant = NULL; 
    novo->prox = inicio; 

    if (inicio != NULL) 
        inicio->ant = novo;

    return novo;
}

no* remove_inicio(no *inicio){
    no *aux;

    if (inicio == NULL){
        printf("Lista vazia!\n");
        return NULL;
    }

    aux = inicio;
    inicio = inicio->prox; 

    if (inicio != NULL) 
        inicio->ant = NULL;

    free(aux);
    return inicio;
}

void exibe_lista(no *inicio){
    no *aux = inicio;
    printf("NULL <=> ");

    while (aux != NULL){
        printf("%d <=> ", aux->info);
        aux = aux->prox;
    }

    printf("NULL \n");
}

void exibe_lista_invertida(no *inicio){
    if (inicio == NULL) {
        printf("NULL <=> NULL \n");
        return;
    }

    no *aux = inicio;
    
    while (aux->prox != NULL){
        aux = aux->prox;
    }

    printf("NULL <=> ");

    while (aux != NULL){
        printf("%d <=> ", aux->info);
        aux = aux->ant;
    }
    
    printf("NULL \n");
}

no* insere_fim(no *inicio, int valor){
    no *novo = malloc(sizeof(no));
    novo->info = valor;
    novo->prox = NULL;

    if(inicio == NULL){
        novo->ant = NULL;
        return novo;
    }

    no *aux = inicio;

    while (aux->prox != NULL){
        aux = aux->prox;
    }

    novo->ant = aux;
    aux->prox = novo;

    return inicio;
}

no* remove_fim(no *inicio){
    no *aux;

    if (inicio == NULL){
        printf("Lista vazia!\n");
        return NULL;
    }

    aux = inicio;

    if (aux->prox == NULL) {
        free(aux);
        return NULL;
    }

    while (aux->prox != NULL){
        aux = aux->prox;
    }

    aux->ant->prox = NULL;
    free(aux);

    return inicio;
}

void buscar_valor(no *inicio, int valor){
    no *aux = inicio;
    int contador = 0;

    while(aux != NULL){
        if(aux->info == valor){
            printf("Valor %d encontrado na posicao %d!\n", valor, contador);
            return;
        }
        contador++;
        aux = aux->prox;
    }

    printf("Valor não encontrado\n");
}

no* liberar_memoria(no *inicio){
    no *aux = inicio, *proximo;

    while (aux != NULL){
        proximo = aux->prox;
        free(aux);
        aux = proximo;
    }
    
    return NULL;
}

void main() {
    setlocale(LC_ALL, "Portuguese"); 
    no *inicio = inicializa();
    int opcao, valor;

    do {
        printf("\n========== MENU ==========\n");
        printf("1 - Inserir no inicio\n");
        printf("2 - Inserir no fim\n");
        printf("3 - Remover do inicio\n");
        printf("4 - Remover do fim\n");
        printf("5 - Exibir lista\n");
        printf("6 - Exibir lista invertida\n");
        printf("7 - Buscar valor\n");
        printf("8 - Liberar memoria (Esvaziar lista)\n");
        printf("0 - Sair\n");
        printf("==========================\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite o valor para inserir no inicio: ");
                scanf("%d", &valor);
                inicio = insere_inicio(inicio, valor);
                break;
            
            case 2:
                printf("Digite o valor para inserir no fim: ");
                scanf("%d", &valor);
                inicio = insere_fim(inicio, valor);
                break;
            
            case 3:
                inicio = remove_inicio(inicio);
                printf("Remocao do inicio realizada (se a lista nao estava vazia).\n");
                break;
            
            case 4:
                inicio = remove_fim(inicio);
                printf("Remocao do fim realizada (se a lista nao estava vazia).\n");
                break;
            
            case 5:
                exibe_lista(inicio);
                break;
            
            case 6:
                exibe_lista_invertida(inicio);
                break;
            
            case 7:
                printf("Digite o valor para buscar: ");
                scanf("%d", &valor);
                buscar_valor(inicio, valor);
                break;
            
            case 8:
                inicio = liberar_memoria(inicio);
                printf("Memoria liberada e lista esvaziada.\n");
                break;
            
            case 0:
                inicio = liberar_memoria(inicio); // Boa pratica: limpar a memoria antes de fechar
                printf("Saindo do programa...\n");
                break;
            
            default:
                printf("Opcao invalida! Tente novamente.\n");
        }
    } while (opcao != 0);
}