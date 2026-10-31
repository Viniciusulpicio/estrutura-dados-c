#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    float info;
    struct no *prox;
}no;

typedef struct{
    no *inicio;
    no *fim;
} fila;

fila* inicializa(){
    fila *f;

    f = malloc(sizeof(fila));
    f->inicio = NULL;
    f->fim = NULL;

    return f;
}

no* enfileirar(fila *f, float valor){
    no *novo;
    novo = malloc(sizeof(no));

    novo->info = valor;
    novo->prox = NULL;

    if(f->inicio == NULL){
        f->inicio = novo;
    }else{
        f->fim->prox = novo;
    }

    f->fim = novo;
    return novo;

}

no* desenfileiar(fila *f){
    no *aux;
    aux = f->inicio;

    if(f->inicio == NULL){
        printf("Fila vazia\n");
        return NULL;
    }

    if(f->inicio->prox == NULL){
        f->inicio = NULL; 
        f->fim = NULL;
        free(aux);
        return NULL;
    }

    f->inicio = f->inicio->prox;
    free(aux);
    return f->inicio;
}


void exibir_fila(fila *f){
    no *aux;
    aux = f->inicio;

    if(f->inicio == NULL){
        printf("Fila vázia\n");
    }else{
        printf("Inicio =>");
        while (aux != NULL){
            printf(" %2.f =>", aux->info);
            aux = aux->prox;
        }
        printf("Fim\n");
    }
}

void liberar_memoria(fila *f){
    no *aux;
    aux = f->inicio;

    while(aux != NULL){
        f->inicio = f->inicio->prox;
        free(aux);
        aux = f->inicio;
    }

    printf("Memória limpa\n");
    free(f);
}


void main(){
    fila *f;
    int opcao;
    float valor;

    f = inicializa();
    do
    {
        printf("----- MENU DE FILA -----\n");
        printf("1 - Enfileiras (adicionar ao fim)\n");
        printf("2 - Desenfileirar (remover do inicio)\n");
        printf("3 - Exibir fila\n");
        printf("0 - Liberar memória e finalizar\n");

        printf("Qual opcao quer escolher: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1 :
            printf("Qual valor quer enfileirar: ");
            scanf("%f", &valor);
            enfileirar(f, valor);
            printf("\n");
            break;

        case 2:
            printf("Desenfileirando: \n");
            desenfileiar(f);
            break;

        case 3:
            printf("\n");
            exibir_fila(f);
            printf("\n");
            break;

        case 0: 
            liberar_memoria(f);
            break;
        
        default:
            printf("Argumento inválido, tente novamente\n");
            break;
        }
    } while (opcao != 0);
    
}