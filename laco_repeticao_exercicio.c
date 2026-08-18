#include <stdio.h>
#include <locale.h>

void mensagem(){
    char texto[255];
    int i;

    printf("Digite seu texto: ");
    scanf(" %254[^\n]", &texto);

    for (i=1; i<=10; i++){
        printf("%s \n", texto);
    }
}

void comparar_num(){ 
    int i, num, maior, menor, soma = 0, media; 
    
    for (i = 1; i <= 10; i++){ 
        printf("Digite seu numero: "); 
        scanf("%d", &num); 
        
        if (i == 1) {
            maior = num;
            menor = num;
        } else {
            if (num > maior) maior = num; 
            if (num < menor) menor = num;
        }
        
        soma = soma + num; 
    } 
    
    media = soma / 10; 
    printf("A soma dos valores é %d \nSua media é %d \nO menor valor é %d \nO maior valor é %d\n", soma, media, menor, maior); 
}


void pares(){
    int i;
    for (i = 0; i <= 100; i++){
        if (i%2 == 0){
            printf("%d \n", i);
        }
    }
}


void multiplos_tres(){
    int i;
    for (i = 0; i <= 500; i++){
        if (i%3 == 0){
            printf("%d \n", i);
        }
    }
}


void patinhos() {
    int i;
    int num_patinhos = 5;

    for (i = num_patinhos; i > 0; i--) {
        printf("%d patinhos foram passear\n", i);
        printf("Além das montanhas para brincar\n");
        printf("A mamãe gritou: Quack, quack, quack, quack\n");
        
        if (i - 1 > 0) {
            printf("Mas só %d patinhos voltaram de lá.\n\n", i - 1);
        } else {
             printf("Mas nenhum patinho voltou de lá.\n\n");
        }
    }

    printf("A mamãe patinha foi procurar\n");
    printf("Além das montanhas na beira do mar\n");
    printf("A mamãe gritou: Quack, quack, quack, quack\n");
    printf("E os %d patinhos voltaram de lá.\n", num_patinhos);

}

void main(){
    setlocale(LC_ALL, "Portuguese");
    mensagem();
    comparar_num();
    pares();
    multiplos_tres();
    patinhos();
}