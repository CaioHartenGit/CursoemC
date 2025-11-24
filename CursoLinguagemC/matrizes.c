#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int mat [3][3];

    mat[0][0] = 1;
    mat[0][1] = 2;
    mat[0][2] = 3;

    mat[1][0] = 4;
    mat[1][1] = 5;
    mat[1][2] = 6;

    mat[2][0] = 7;
    mat[2][1] = 8;
    mat[2][2] = 9;

    printf("\nimprimindo a primeira linha: \n");
    printf("%d %d %d\n",mat[0][0], mat[0][1], mat[0][2]);
    
    printf("\nimprimindo a segunda linha: \n");
    printf("%d %d %d\n",mat[1][0], mat[1][1], mat[1][2]);
    
    printf("\nimprimindo a terceirz linha: \n");
    printf("%d %d %d\n",mat[2][0], mat[2][1], mat[2][2]);

//Não é muito utilizado 

    int mat2 [3][3] = {{(1,2,3)},
                      {(4,5,6)},
                      {(7,8,9)}};
int linha,coluna;

printf("\nImprimindo a matriz toda: \n");
for(linha = 0; linha<3; linha++){
for(coluna = 0; coluna<3; coluna++){
    printf("%d",mat2[i][j]);
    }
    printf("\n");
}
    return 0;
}