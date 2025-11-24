#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

int main(){

    char vetor[15];

    /*printf("Digite algo (scanf convencional): \n");
    scanf("%s", vetor);
    fflush(stdin);

    printf("resultado: %s\n\n", vetor);*/

    printf("digite algo (fgets): \n");
    fgets(vetor,15,stdin);
    fflush(stdin);

    printf("resultado(fgets): %s\n", vetor);

    //scanf -> não le com espaços 

    printf("\n\nutilizando a biblioteca -> string.h\n\n");

    //utilizando a biblioteca

    // strcpy -> usado para alterar o conteúdo de uma string 
    // strcat -> usado para somar um conteudo de uma string na outra
    // strlen -> mostra o tamanho da string
    // strcmp -> compara igualdade entre strings (se sim! retorna valor igual a 0)

    char origem [15] = {"Olá, mundo!"};
    char destino[15];

    printf("Antes do strcpy:\n\n");
    printf("Origem: %s\n", origem);
    printf("Destino: %s\n", destino); // ainda lixo, conteúdo indefinido

    // Copiando origem para destino
    strcpy(destino, origem);

    printf("Depois do strcpy\n\n");
    printf("Origem: %s\n", origem);
    printf("Destino: %s\n", destino);

    printf("\n==================\n");
    printf("utilizando o strcat\n");

    char s1[30] = {"logica de "};
    char s2[15] = {"Programação"};

    printf("\nAntes do strcat: \n");
    printf("str1: %s\n", s1);
    printf("str2: %s\n", s2);

    strcat(s1,s2);

    printf("\nDepois do strcat: \n");
    printf("str1: %s\n", s1);

    printf("\n======================\n");
    printf("\nutilizando o strlen\n");

    char s[30];
    int i;

    printf("\nDigite um texto: \n");
    fgets(s,30,stdin);
    fflush(stdin);
    i = strlen(s);
    printf("\nTamanho do texto %d\n\n",i);

    printf("\nimpressão de posição a posição: \n");
    for(i = 0; i<strlen(s); i++){
        printf("%c", s[i]);
    //poderia usar tbm
    //printf(s);
    }

    printf("\n\n=========================\n\n");
    printf("\nutilizando o strcmp\n");

    char hardtext[50] = {"/exit"};
    char senha_usr[50];
    int compara;

    printf("Digite um texto: \n");
    fgets(senha_usr,50,stdin);

    compara = strcmp(hardtext,senha_usr);

    if(compara == 0){
        printf("textos iguais.\n");
    }else{
        printf("textos diferentes. \n");
    }

    return 0;
}