#include <locale.h>

struct ficha_aluno{
    char nome[50];
    int RA;
    char cidade[50];
    float media;
}

void main(){
    setlocale(LC_ALL, "Portuguese")

    struct ficha_aluno aluno1 = {"Tomas", 2213456, "Quintana", 7.6};
    struct ficha_aluno aluno2 = {"Jhuan", 2213493, "Marilia", 6.9};
    struct ficha_aluno aluno3 = {"Guilherme", 2213456, "Quintana", 10};



}