#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

     // ==============================================

printf("\n\n==== Domine Laços de Repetições =====\n\n");
printf("while |laços condicionais\n");
printf("Do While\n");
printf("FOR");


    //Laço Condicional -> While

    int i = 1; // tem que colocar SEMPRE o valor inicial para evitar possiveis BUGS (No caso ai iniciei com 1)

    //Enquanto -> usado quando não sabemos exatamente quantas vezes ele vai repetir 
    //Executa so se for verdadiro 
    while (i <= 10){
            printf("%d ", i);
            i++;
    }
    // Laço Condicional -> do-while 

    printf("\n======= do-while =========\n");

    
//Sintaxe -> Prefiro o While Normal
//Usado quando queremos executar o código pelo menos 1 vez, mesmo que a condição seja Falsa 
    int o = 1;
    do{
        printf("%d ", o);
        o++;
    }while( o<=10 );
//Foque em um laço de Repetição expecifico 

    
    printf("\n=========== Laço FOR ===========\n"); // Mais Completo

    //Para
    for(int f = 0; f<=10; f++){
        printf("%d", f);
    }

    // Break e Continue 
    //Break -> Encerra por completo 
    //Continue -> Encerra 1 repetição  e passa para proxima interação 
    printf("\nBreak e Continue\n"); // Finalizando as Estruturas de Repetição 

    //Exemplo BREAK
    int c;
    for(c = 1; c <= 10; c++){
        printf("%d", &c);
        
        if(c == 5){
        break; // Comando de parada da repetição (em tudo)
        }
 }

    int a;
    for(a = 1; a <= 10; a++){
         if(a == 5){
        continue; // encerrea 1 repetição e passa para a proxima 
        }
        printf("%d", &a);
    }



return 0;
}