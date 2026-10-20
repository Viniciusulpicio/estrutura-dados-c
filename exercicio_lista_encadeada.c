#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

typedef struct no{
    int info;
    struct no *prox;
} no;

typedef struct{
    no *inicio;
} lista;


lista* cria_lista(){
    lista *l;

    l = malloc(sizeof(lista));
    l->inicio = NULL;
    return l;
}

void insere_inicio(lista *l, int valor){
    no *novo;

    novo = malloc(sizeof(no));
    novo->info = valor;
    novo->prox = l->inicio;
    l->inicio = novo;
}

void insere_fim(lista *l, int valor){
    no *novo;
    no *aux;

    novo = malloc(sizeof(no));
    novo->info = valor;
    novo->prox = NULL;

    if (l->inicio == NULL) {
        l->inicio = novo;
        return;
    }

    aux = l->inicio;
    while(aux->prox != NULL){
        aux = aux->prox;
    }

    aux->prox = novo;
}

void remove_inicio(lista *l){
    no *aux;

    if (l->inicio == NULL){
        printf("\nA lista está vazia\n");
    }else{
        aux = l->inicio;
        l->inicio = aux->prox;
        free(aux);
    }
}

void remove_fim(lista *l){
    no *aux;
    no *delet;

    if (l->inicio == NULL){
        printf("\nA lista está vazia\n");
    }else if (l->inicio->prox == NULL) {
        free(l->inicio);
        l->inicio = NULL;
    }else{
        aux = l->inicio;
        while(aux->prox->prox != NULL){
            aux = aux->prox;
        }

        delet = aux->prox;
        aux->prox = NULL;
        free(delet);

    }

}


void buscar_valores(lista *l, int valor){
    no *aux;
    aux = l->inicio;

    while(aux != NULL){
        
        if(aux->info == valor){
            printf("\nO valor foi encontrado\n");
            return;
        }
        aux = aux->prox;
    }
    printf("\nO valor digitado nao existe na lista\n");
}

void exibir_lista(lista *l){
    no *aux;
    aux = l->inicio;

    while(aux != NULL){
        printf("---- INFO: %d----\n", aux->info);
        aux = aux->prox;
    }
}

void main(){
    lista *l;
    l = cria_lista();
    printf("\nInserindo dados no incio\n");
    insere_inicio(l, 13);
    insere_inicio(l, 22);
    insere_inicio(l, 55);
    insere_inicio(l, 14);
    exibir_lista(l);
    printf("\nInserindo dado no fim\n");
    insere_fim(l, 11);
    exibir_lista(l);
    printf("\nRemove dado no começo\n");
    remove_inicio(l);
    exibir_lista(l);
    printf("\nRemove dado no fim\n");
    remove_fim(l);
    printf("\nBuscar valores\n");
    buscar_valores(l, 13);
    buscar_valores(l, 00);
    exibir_lista(l);
}