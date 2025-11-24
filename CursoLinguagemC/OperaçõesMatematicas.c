#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

// Realização de Cálculo em C | Expressões Aritméticas 

    /* 

    Operadores Matemáticos EM C

    Soma: + 
    Subtração: -
    Multiplicação: *
    Divisão: /
    Resto de Divisão inteira: 

    */
   printf("\n=================================================\n");

   printf("\nRealização de Cálculo em C | Expressões Aritméticas \n\n");

   float num1, num2, soma, sub, mult, div; // Varias Variaveis definidas em uma so linha 

   printf("Digite o primeiro valor: ");
   scanf("%f", &num1);

   printf("Digite o segundo  valor: ");
   scanf("%f", &num2);

   printf("\n\n=============Operações sendo Analisadas===========\n ");

   //Lembrete: isso não aparece no visor do usúario! só no código para conseguir fazer as operações!
   soma = num1 + num2;
   sub = num1 - num2;
   mult = num1 * num2;
   div = num1 / num2;

   printf("\nOperação de Soma: %.2f", soma);
   printf("\nOperação de Subtração: %.2f", sub);
   printf("\nOperação de Multiplação: %.2f", mult);
   printf("\nOperação de Divisão: %.2f", div--);

    return 0;
}