#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

     // Estrutura de Decisão mútipla | Switch - Case
    //Somente Comparações de Igualdade 
    
    printf("============================\n");
    printf("\n\nSwitch - Case | Estrutura de Decisão Mútpla\n\n");

    //Switch - Case é como se fosse uma sequencia de varios IF (Como se fosse um menu)

    //Programa -> Imprime por extenso o dia da semana que o usúario digita entre 1 a 7

    printf("Aprendendo o Switch com dias da semana:");
    
    int dia = 0;
    
    printf("\nDigite um número de 1 a 7: (cada número corrresponde a um dia da semana) ");
    scanf("%d", &dia);

    switch (dia){
        case 1:
            printf("domingo\n");
            break;
        case 2:
            printf("Segunda-feira\n");
            break;
        case 3:
            printf("Terça-feira\n");
            break;
        case 4: 
            printf("Quarta-feira\n");
            break;
        case 5: 
            printf("Quinta-feira\n");
            break;
        case 6:
            printf("Sexta-feira\n");
            break;
        case 7:
            printf("Sabado\n");
            break;
        default:
            printf("Valor invádido! Não corresponde a nenhum dia da semana");
                break;
        }
   
    // =================================
 // menu de um restaurante 

printf("\n\nTentativa de Atividade para Masterizar o Switch - Case\n\n");

int menu;

while (menu !=5) {
printf("==============================================\n");
printf("   🍔 Bem-vindo ao Restaurante do GALEGO 🍟   \n");
printf("==============================================\n\n");

printf("--------------- MENU ----------------\n");
printf("  1. X-Burguer          - R$ 12.00\n");
printf("  2. Batata Frita       - R$  8.00\n");
printf("  3. Combo 1 (X + Refri) - R$ 18.00\n");
printf("  4. Combo 2 (X + Batata) - R$ 20.00\n");
printf("  5. Combo 3 (XTudo!)     - R$ 25.00\n");
printf("------------------------------------\n");

printf("\nEscolha uma opção: ");
scanf("%d", &menu);

switch(menu){
    case 1:
        printf("Processando Pedido!\n");
        printf("Pedido Realizado com Sucesso\n- X-burgue");
        printf("Pague no Caixa mais Proximo\n\n");
        break;
    case 2:
        printf("Processando Pedido!\n");
        printf("Pedido Realizado com Sucesso\n- Batata Frita");
        printf("Pague no Caixa mais Proximo\n\n");
            break;
    case 3:
        printf("Processando Pedido!\n");
        printf("Pedido Realizado com Sucesso\n- Combo 1");
        printf("Pague no Caixa mais Proximo\n\n");
            break;
    case 4:
        printf("Processando Pedido!\n");
        printf("Pedido Realizado com Sucesso\n- Combo 2");
        printf("Pague no Caixa mais Proximo\n\n");
            break;
    case 5:
        printf("Processando Pedido!\n");
        printf("Pedido Realizado com Sucesso\n- Combo 3 ");
        printf("Pague no Caixa mais Proximo\n\n");
            break;
    default:
        printf("Opção inválida! Reveja o cardápio para saber a melhor oferta para você ;)\n");
        break;
}

    return 0;
}   
    }
