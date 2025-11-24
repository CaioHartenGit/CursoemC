# Básico de Programação Estruturada | Utilizando Linguagem C 

Curso_Inicial_Programador_C

Guia Rápido de C – Principais Conceitos e Comandos

Este repositório é um guia rápido para iniciantes em C, reunindo os principais comandos, conceitos e boas práticas. Serve tanto para consulta pessoal quanto para estudo e compartilhamento com outras pessoas.

1️⃣ Estrutura Básica de um Programa

Todo programa em C começa com a função main().

Arquivos de cabeçalho (#include) fornecem funções prontas, como stdio.h para entrada e saída.

O programa termina normalmente com return 0;.

2️⃣ Tipos de Variáveis

int → números inteiros.

float e double → números reais (decimais).

char → um único caractere.

char[] / strings → sequências de caracteres.

Sempre inicialize suas variáveis para evitar lixo de memória.

3️⃣ Entrada e Saída de Dados

printf → exibe informações na tela.

scanf → lê dados formatados (inteiros, floats, chars).

fgets → lê linhas de texto, ideal para strings.

Lembre-se de tratar o buffer para não ter leituras puladas.

4️⃣ Operadores

Aritméticos: +, -, *, /, %

Atribuição: =, +=, -=, *=, /=

Comparação: ==, !=, <, >, <=, >=

Lógicos: &&, ||, !

Incremento / Decremento: ++, --

5️⃣ Estruturas de Controle

Decisão: if, else, switch

Repetição: for, while, do...while

Permitem controlar o fluxo do programa de acordo com condições e repetições.

6️⃣ Arrays e Matrizes

Arrays (vetores): armazenam múltiplos valores do mesmo tipo.

Matrizes (arrays 2D): armazenam dados em linhas e colunas.

Útil para manipulação de listas, tabelas e gráficos.

7️⃣ Strings

Arrays de char usados para textos.

Funções comuns:

strlen() → tamanho da string.

strcpy() → copia uma string para outra.

strcat() → concatena duas strings.

strcmp() → compara duas strings.

Sempre cuide do tamanho para evitar overflow.

8️⃣ Structs

Estruturas que agrupam diferentes tipos de dados.

Exemplo: armazenar informações de uma pessoa (nome, idade, peso).

typedef permite criar apelidos para structs, facilitando a declaração de variáveis.

9️⃣ Ponteiros

Variáveis que armazenam endereços de memória.

Usados para alocação dinâmica, passagem de parâmetros e manipulação eficiente de dados.

Operadores:

* → acesso ao valor apontado.

& → endereço da variável.

10️⃣ Alocação Dinâmica

Criar variáveis e arrays cujo tamanho é definido em tempo de execução.

Funções:

malloc() → aloca memória.

calloc() → aloca e inicializa com zero.

realloc() → redimensiona memória.

free() → libera memória.

Evita desperdício e permite flexibilidade em programas complexos.

11️⃣ Funções

Permitem organizar código, evitando repetição.

Cada função pode ter parâmetros e retornar valores.

Boa prática: manter funções pequenas e claras.

12️⃣ Boas Práticas

Comente o código usando // ou /* ... */.

Indente corretamente para facilitar leitura.

Inicialize variáveis antes de usar.

Libere memória alocada dinamicamente.

Teste sempre entradas do usuário para evitar erros.

13️⃣ Dicas Extras para Iniciantes

Use apenas fgets para strings, evitando problemas com scanf.

Prefira sizeof() ao alocar memória dinamicamente para garantir tamanho correto.

Experimente pequenos programas para aprender loops, arrays e structs.

Sempre compile com warnings ativados (-Wall no gcc) para detectar problemas.
