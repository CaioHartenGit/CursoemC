#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int v[5];

    v[0] = 50;
    v[1] = 40;
    v[2] = 30;
    v[3] = 20;
    v[4] = 10;

    float m = (v[0] + v[1] + v[2] + v[3] + v[4] /5);

    printf("resultado: %f\n", m);
 
    // isso nao é muito prático

    printf("\n==================================\n");

    int vetor[5] = {10,20,30,40,50};
    float s = 0;

    for(int i = 0; i < 5; i++){
        s += v[i];
    }
    
    s/5;
    printf("resultado: %f\n", s);

    //bem mais simples e facil 

    printf("\nEntrada de Dados com Arrys\n");

    int ve[5];
    for(int i = 0; i < 5; i++){
        printf("Insira um dado: \n");
        scanf("%d", &ve[i]);
    }
    printf("Dados Inseridos: \n");
        for(i = 0; i < 5; i++){
            printf("%d", ve[i]);
        }

    return 0;
}