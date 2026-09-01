#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

void soma_dez(){
    int i, vetor[10], soma = 0;

    for(i=0; i < 10; i++){
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
        soma = soma + vetor[i];
    }

    printf("O valor da sua soma é %d", soma);

}

void inverso(){
    int i, vetor[5];
    for(i=0; i< 5; i++){
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
    }

    for(i=4; i >= 0; i--){
        printf("Seu valor é: %d \n", vetor[i]);
    }
}

#include <stdio.h>

void preencher_array() {
    int i, j, backup, vetor[30];

    for (i = 0; i < 30; i++) {
        printf("Digite um numero (0 para parar): ");
        scanf("%d", &backup);

        if (backup == 0) {
            break; 
        } 
        
        vetor[i] = backup;
    }

    printf("\nValores armazenados:\n");
    for (j = 0; j < i; j++) {
        printf("Seu valor é: %d\n", vetor[j]);
    }
}


void manipular_string(){
    char palavra[255]; 
    int i, n_letras, vogal = 0, consoante = 0; 
    
    printf("Digite uma palavra: "); 
    scanf("%254s", palavra);
    
    n_letras = strlen(palavra); 
    
    for(i = 0; i < n_letras; i++){ 
        char c = tolower(palavra[i]); 
        
        if (isalpha(c)) { 
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){ 
                vogal++; 
            } else { 
                consoante++; 
            } 
        }
    } 
    
    printf("O numero de vogais e: %d\n", vogal); 
    printf("O numero de consoantes e: %d\n", consoante);

}

void main(){
    setlocale(LC_ALL, "Portuguese");
    soma_dez();
    inverso();
    preencher_array();
    manipular_string();
}