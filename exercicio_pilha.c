#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    int info;
    struct no *prox;
}no;

typedef struct{
    no *topo;
}pilha;

pilha* criar_pilha(){
    pilha *p;
    p = malloc(sizeof(pilha));

    p->topo = NULL;
    return p;
}

no* push(pilha *p, int info){
    no *aux;
    aux = malloc(sizeof(no));

    aux->info = info;
    aux->prox = p->topo;

    p->topo = aux;
    return p->topo;
}

no* pop(pilha *p){
    no *aux;

    if(p->topo == NULL){
        printf("A pilha está vazia\n");
        return NULL;
    }

    aux = p->topo;
    p->topo = p->topo->prox;
    free(aux);

    return p->topo;
}

void exibir_pilha(pilha *p){
    no *aux;
    aux = p->topo;

    if(p->topo == NULL){
        printf("Pilha vázia\n");
    }else{
        while (aux != NULL){
            printf("%d \n", aux->info);
            aux = aux->prox;
        }
        printf("\n");
    }

}

void liberar_memoria(pilha *p){
    no *aux;

    if(p->topo == NULL){
        printf("A memoria ja está vazia"); 
    }else{
        while(p->topo != NULL){
            aux = p->topo;
            p->topo = p->topo->prox;
            free(aux);
        }
        printf("A memoria foi limpa\n");
    }
    free(p);
}


void main(){
    pilha *p = criar_pilha();
    int opcao, valor;

    do{
        printf("\n--- MENU DA PILHA ---\n");
        printf("1 - Inserir um numero (Push)\n");
        printf("2 - Remover um numero (Pop)\n");
        printf("3 - Exibir pilha\n");
        printf("0 - Sair e Limpar a Memoria\n");
        printf("Escolha uma opcao: ");
        
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("Digite o valor que quer inserir: ");
            scanf("%d", &valor);
            push(p, valor);
            printf("\n");
            break;

        case 2:
            printf("Removendo um valor da lista\n");
            pop(p);
            break;

        case 3:
            printf("\n");
            exibir_pilha(p);
            break;

        case 0:
            liberar_memoria(p);
            break;
        
        default:
            printf("Condição inválida, tente novamente\n");
            break;
        }
    } while (opcao != 0);
    


}

