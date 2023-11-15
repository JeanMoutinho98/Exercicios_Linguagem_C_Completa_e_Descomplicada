#include <stdio.h>                                                  //Okok
#include <stdlib.h>

typedef struct cadastro{
    char nome[20];
    int idade;
    char endereco[50];
} Cadastro;


Cadastro* CriaListaDeCadastros(int n){
    Cadastro* cadastros = (Cadastro*) malloc(n*sizeof(Cadastro));
    printf("Preencha os dados dos cadastros:\n");
    for(int i = 0; i < n; i++){
        printf("Nome: ");
        scanf("%s", cadastros[i].nome);
        printf("Idade: ");
        scanf("%d", &cadastros[i].idade);
        printf("Endereco: ");
        scanf("%s", cadastros[i].endereco);
    }
    return cadastros;
}


int main(){
    int n;


    scanf("%d", &n);
    Cadastro* cadastros = CriaListaDeCadastros(n);
     for(int i = 0; i < n; i++){
        printf("Nome: %s\n", cadastros[i].nome);
        printf("Idade: %d", cadastros[i].idade);
        printf("Endereco: %s", cadastros[i].endereco);
    }


return 0;
}