#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    int info;
    struct no *prox;
} no;

typedef struct{
    no *inicio;
    no *fim;
} lista;

lista* cria_lista(){
    lista *l;

    l = malloc(sizeof(lista));
    l->inicio = NULL;
    l->fim = NULL;
    return l;
}


no* insere_inicio(lista *l, int valor) {
    no *novo;
    novo = malloc(sizeof(no));
    
    novo->info = valor;
    
    if (l->inicio == NULL) {
        l->inicio = novo;
        l->fim = novo;
        novo->prox = novo;
        return novo;
    } 

    novo->prox = l->inicio; 
    l->inicio = novo;
    l->fim->prox = l->inicio;

    return novo;

}

no* insere_fim(lista *l, int valor){
    no *novo;
    novo = malloc(sizeof(no));
    
    novo->info = valor;
    
    if (l->fim == NULL) {
        l->inicio = novo;
        l->fim = novo;
        novo->prox = novo;
        return novo;
    } 


    novo->prox = l->inicio; 
    l->fim->prox = novo;
    l->fim = novo;

    return novo;

}

no* remove_inicio(lista *l) {
    if (l->inicio == NULL) {
        printf("A lista está vazia\n");
        return NULL;
    }

    if (l->inicio == l->fim) {
        free(l->inicio);
        l->inicio = NULL;
        l->fim = NULL;
        return NULL;
    } 

    no *aux = l->inicio;
    l->fim->prox = l->inicio->prox;
    l->inicio = l->inicio->prox;
    free(aux);
    
    return NULL;
}


no* remove_fim(lista *l){
    if (l->fim == NULL) {
        printf("A lista está vazia\n");
        return NULL;
    }

    if (l->inicio == l->fim) {
        free(l->inicio);
        l->inicio = NULL;
        l->fim = NULL;
        return NULL;
    } 

    no *penultimo;
    penultimo = l->inicio;
    while (penultimo->prox != l->fim) {
        penultimo = penultimo->prox;
    }

    no *aux;
    aux = l->fim;
    
    penultimo->prox = l->inicio;
    l->fim = penultimo;

    free(aux);
    return NULL;

}

void exibe_lista(lista *l){
    no *aux;
    aux = l->inicio;

    if(l->inicio == NULL){
        printf("A lista está vazia");
        return;
    }

    printf("\nINICIO =>");

    do {
        printf("%d => ", aux->info);
        aux = aux->prox;
    } while (aux != l->inicio);

    printf("FIM\n");

}

void atualizar_valor(lista *l, int busca, int novo_valor){
    no *aux;
    aux = l->inicio;

    if (l->inicio == NULL) {
        printf("A lista esta vazia\n");
        return;
    }

    do{
        if(aux->info == busca){
            aux->info = novo_valor;
        }
        aux = aux->prox;
    } while (aux != l->inicio);
    
}

void liberar_memoria(lista *l){

    if (l->inicio != NULL) {
        l->fim->prox = NULL; 
        
        no *aux = l->inicio;
        no *temp;

        while (aux != NULL) {
            temp = aux->prox;
            free(aux);
            aux = temp; 
        }
    }

    printf("Memória limpa\n");
    free(l);
    
}

void main(){
    lista *l;
    int opcao, valor, buscar;

    l = cria_lista();

    do{
        printf("1 - Inserir no inicio da lista\n");
        printf("2 - Inserir no final da lista\n");
        printf("3 - Remover no inicio da lista\n");
        printf("4 - Remover no fim da lista\n");
        printf("5 - Exibri lista\n");
        printf("6 - Buscar um valor na lista e atualizá-lo com um novo valor\n");
        printf("0 - Liberar memoria e encerrar\n");

        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("Qual dado quer inserir no inicio da lista: ");
            scanf("%d", &valor);
            insere_inicio(l, valor);
            printf("Valor inserido no inicio\n");
            break;

        case 2:
            printf("Qual dado quer inserir no fim da lista: ");
            scanf("%d", &valor);
            insere_fim(l, valor);
            printf("Valor inserido no fim\n");
            break;
        
        case 3:
            remove_inicio(l);
            printf("Valor removido no inicio\n");
            break;

        case 4:
            remove_fim(l);
            printf("Valor removido no fim\n");
            break;

        case 5:
            printf("\n");
            exibe_lista(l);
            printf("\n");
            break;

        case 6:
            printf("Qual valor deseja substituir da lista: ");
            scanf("%d", &buscar);
            printf("\nQual valor deseja inserir na substituicao: ");
            scanf("%d", &valor);
            atualizar_valor(l, buscar, valor);
            printf("Valor atualizado");
            break;

        case 0:
            liberar_memoria(l);
            break;

        default:
            printf("Argumento inválido, tente novamente");
        }

    } while (opcao != 0);
    
}

