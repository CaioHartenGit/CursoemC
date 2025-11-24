#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define exemploDefine "Entrada e Saída de Dados (testando define)"

//Operações de Entrada e Saída

    int main(){
        //exemplo de como define funciona 
    printf("\nAlteração usando DEFINE: %s\n", exemploDefine);
        
    printf("\n============================================================================\n");

    printf("Oi, Meu nome é Caio Harten! tenho 19 anos e estou estudando Linguagem C.\n");
    printf("Valor inteiro: %d\n", 19);
    printf("Valor de PI: %f\n", 3.145633264);
    printf("Valor de PI com apenas duas casas depois da virgula %.2f\n", 3.145633264);
    printf("Dado do Texto: %c\n", 'C');
    printf("Dado do Texto: %s\n", "Relembrando a base de C");
    
    //Operações de Entrada e Saída com SCANF()

    printf("\n\n====================================\n");

    printf("\nOperações de Entrada e Saída, Utilizando SCANF()\n");


    char nome [30];
    printf("Qual seu nome: ");
    fgets(nome, 30, stdin); // teste com metodo de string nova 

    char linguagem[30];
    printf("Qual a Linguagem que vc ta estudando no momento: ");
    scanf("%s", linguagem);  // <-- correto

    int IdadeE;
    printf("Tempo de Duração do Estudo com Programação: ");
    scanf("%d", &IdadeE); 

    printf("Olá, %s!\n", nome);
    printf("Você está estudando %s no momento.\n", linguagem);
    printf("Faz %d anos que começou a se aventurar no mundo da programação.\n", IdadeE);
    printf("Continue firme nos estudos! 🚀\n");

    printf("\n\n========================================\n\n");

    //Variáveis e Atribuição de dados - Operador = em C

    printf("Variáveis e Atribuição de dados - Operador = em C\n");

    // #define -> Cria-se um identificador para um dado de qualquer tipo 
    // Sintaxe = #define <nome> <valor>

    // Treino de declaração de Variaveis | Entrada e Saída com PRINTF e SCANF

    int idadeTreino = 0;
    float altura = 0.0;
    char nomeTreinoDeclaração[50] = "";

    printf("Digite sua Idade: ");
    scanf("%d", &idadeTreino);

    printf("Digite sua Altura: ");
    scanf("%f", &altura);

    printf("Digite seu Nome: ");
    scanf("%s", nomeTreinoDeclaração);

    printf("\n========Dados Informados pelo Usúario========\n\n");
    printf("Idade: %d\n", idadeTreino);
    printf("Altura: %.2f\n", altura);
    printf("Nome: %s\n", nomeTreinoDeclaração);

    return 0;
    }