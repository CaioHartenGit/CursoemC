#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    // Atribuições Artmética: 
    /*
    Incremento de 1 unidade -> ++
    Decremento de 1 unidade -> --
    Incremento Genérico -> +=
    Decremento Genérico -> -=
    Atribuição com Multiplicação -> *=
    Atribuição com Divisão -> /= 
    */

    printf("\n\n==================================================\n");
    printf("Atribuições Artméticas: de Incremento e Decremento\n");

    char ok [4];
    printf("\nEscreva OK para continuar: ");
    scanf("%s", ok);
    //Lembrete -> podemos colocar um IF e ELSE (quando virmos eu venho aqui e coloco)

    int dado = 10;
    printf("\nVaríavel DADO antes do Incremento: %d\n", dado);

    dado ++;
    printf("Varável DADO depois do Incremento de 1 unidade: %d\n", dado);

    dado --;
    printf("Varável DADO depois do Decremento de 1 unidade: %d\n", dado); 

    //Lembrando -> Dado inicia com 10! porem fazemos um incremento de 1 unidade e ai ele passa a valer 11! 
    //OBS: o Dado passou a valer 11 e quando chegou nessa linha de código para decrementar 1 unidade dele, ele acabou voltando para o 10 devido ao primeiro incremento de 1 unidade 
    //Segue essa mesma Lógica em todos 

    dado += 10;
    printf("Varíavel DADO depois do Incremento Genérico de 10 unidades: %d\n", dado);

    dado -= 5;
    printf("Varíavel DADO depois do Decremento Genérico de 5 unidades: %d\n", dado);

    dado *= 5;
    printf("Varíavel DADO depois de atribuição com Multiplicação por 5: %d\n", dado);

    dado /= 2;
    printf("Varíavel DADO depois de atribuição com divisão por 2: %d\n", dado);




return 0;
}