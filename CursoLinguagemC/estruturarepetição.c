#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    // Começando Estrutura de Repetição com IF ELSE IF E ELSE 
    printf("===================================================\n\n");
    printf("\nEstrutura de Repetição com IF\n");

    char ok2 [4];
    printf("\nEscreva OK para continuar: ");
    scanf("%s", ok2);

    /*
    Operadores Relacionais
  
    Maior -> (>)
    Maior ou Igual -> (>=)
    Menor -> (<)
    Menor ou Igual -> (<=)
    Igual -> (==) OBS: são 2 iguais 
    Diferente -> (!=)
    
    */
   printf("\n\n===== Sistema de Nota de uma Escola =======\n\n");
   printf("Escola Nossa Senhora da Conceição\n\n");

   char nomeAluno[50];
   printf("Escreva o primeiro nome do Aluno(a): ");
   scanf("%s", nomeAluno);

   char CPF[11];
   printf("Escreva o CPF do Aluno: ");
   scanf("%s", CPF);

   printf("\n\nConsultor de Aprovação\n");

   char materia[20];
   float NotaM1 = 0, NotaM2 = 0, MediaNotas = 0;

   printf("\nQual a matéria que deseja consultar sua média: ");
   fgets(materia, 20, stdin);

   printf("\nQual foi sua nota na primeira prova? ");
   scanf("%f", &NotaM1);
   if (NotaM1 > 10 || NotaM1 < 0) {
    printf("Nota Inválida! Digite uma nota Correta");
   }else if (NotaM1 >= 0 || NotaM1 <= 10){
    printf("Sua Primeira Nota: %f", NotaM1);
   }

   printf("\nQual foi sua nota na segunda prova? ");
   scanf("%f", &NotaM2);
   if (NotaM2 > 10 || NotaM2 < 0) {
    printf("Nota Inválida! Digite uma nota Correta");
   }else if (NotaM2 >= 0 || NotaM2 <= 10){
    printf("Sua Segunda Nota: %f", NotaM2);
   }


   // aplica o bônus de +0.5 na segunda nota
   NotaM2 = NotaM2 + 0.5;

   // calcula média  
   MediaNotas = (NotaM1 + NotaM2) / 2;

   printf("\n\n====== Consultando Média para Aprovação =======\n\n");
   printf("Aluno(a): %s\n", nomeAluno);
   printf("Matéria analisada: %s\n", materia);

   /*
   Operadores Lógicos:

   Conjunção ("e" lógico): && -> é verdade quando tudo for verdade 
   Disjunção ("ou" lógico): || -> é verdade se ao menos 1 for verdade 
   Inversão (Negação = "Não lógico"): ! -> é verdade quando o operador é falso
  
   */

   if (MediaNotas > 10.0 || MediaNotas < 0.0) {
       printf("Nota inválida no sistema (deve estar entre 0 e 10).\n");
   } else if (MediaNotas >= 7.0) {
       printf("Consultor de Aprovação: Parabéns, %s passou na matéria %s!\n", nomeAluno, materia);
   } else {
       printf("Consultor de Aprovação: Melhore %s, você reprovou na matéria %s.\n", nomeAluno, materia);
   }

   printf("Sua média na matéria %s foi %.2f\n", materia, MediaNotas);

   //Sempre Começar com IF antes de qualquer ELSE IF ou ELSE sozinho && ELSE vem sempre depois do IF 
    
   printf("\n\n--Código de IF e ElSE mais básico--\n\n");
   printf("\n Código vai pedir uma nota e depois vai dizer se vc foi Aprovado ou Reprovado");

   float IFELSEbasico;

   printf("\n\nDigite sua nota: ");
   scanf("%f", &IFELSEbasico);

   if(IFELSEbasico < 0.0 && IFELSEbasico > 10.0 ){
    printf("Nota Inváida\n");
   } else if (IFELSEbasico >= 7.0){
    printf("Aprovado(a)!\n");
   } else {
    printf("Reprovado(a)!\n");
   }
    return 0;
}