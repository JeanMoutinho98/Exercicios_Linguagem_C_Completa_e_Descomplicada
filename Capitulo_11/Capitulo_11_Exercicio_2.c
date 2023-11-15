#include <stdio.h>                                                  //Okok

typedef struct aluno{
    int matricula;
    char nome[20];
    float nota1, nota2, nota3;
} Aluno;


int main(){
    printf("Tamanho em bytes da struct aluno: %d bytes \n",sizeof(Aluno));
    return 0;
}