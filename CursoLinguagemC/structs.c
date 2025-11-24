#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 50

typedef struct tipo_pessoa {
    int idade;
    float peso;
    char nome[TAM];
} Pessoa;

int main() {
    Pessoa pes = {0, 0.0, "teste"};

    printf("Inicio: \n");
    printf("pes.idade: %d\n", pes.idade);
    printf("pes.peso: %f\n", pes.peso);
    printf("pes.nome: %s\n", pes.nome);

    pes.idade = 10;
    pes.peso = 99.99;
    strcpy(pes.nome, "Texto");

    printf("\nAlterando os campos via Código: \n");
    printf("pes.idade: %d\n", pes.idade);
    printf("pes.peso: %.2f\n", pes.peso);
    printf("pes.nome: %s\n", pes.nome);

    // Entrada de dados do usuário
    char buffer[TAM];

    printf("\nInsira um número inteiro: \n");
    fgets(buffer, TAM, stdin);
    sscanf(buffer, "%d", &pes.idade);

    printf("\nInsira um número real: \n");
    fgets(buffer, TAM, stdin);
    sscanf(buffer, "%f", &pes.peso);

    printf("\nInsira uma palavra: \n");
    fgets(pes.nome, TAM, stdin);
    pes.nome[strcspn(pes.nome, "\n")] = 0; // remove o \n

    printf("\nAlterando com dados do usuário: \n");
    printf("pes.idade: %d\n", pes.idade);
    printf("pes.peso: %.2f\n", pes.peso);
    printf("pes.nome: %s\n", pes.nome);

    return 0;
}
