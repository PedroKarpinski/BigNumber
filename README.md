Projeto realizado em conjunto com Felipe Bittar para a disciplina Programação Estruturada - UFABC

Objetivo: criar um programa em C capaz de realizar operações de soma, subtração e multiplicação
com números inteiros muito grandes, de tamanhos que os tipos nativos da linguagem não são capazes
de armazenar.

Uma explicação de como foi representado o BigNumber:
O nosso tipo BigNumber foi representado por um struct que armazena as seguintes propriedades:
int *digitos, int ndigitos e char sinal. Eles representam, respectivamente, um vetor com os dígitos
do número entrado pelo usuário, o número de dígitos dessa entrada (o tamanho do vetor
digitos) e o sinal do número entrado.

---------------------------------------------------------------------------------------------------------------
Interface do tipo BigNumber:
void limparBuffer(void): Limpa o buffer das entradas.

BigNumber scanBigNumber(void): Lê um número digitado pelo usuário e retorna uma variável do tipo BigNumber.

void addZeros(BigNumber *inp, int n): Adiciona zeros em um vetor digitos de uma
variável BigNumber inp até que esse vetor tenha tamanho igual a n (ex: digitosA = [1, 2], digitosB = [1],

addZeros(digitosB, ndigitosA) faz com que digitosB = [0, 1]).

int tamanhoDoMaiorArray(BigNumber *inp1, BigNumber *inp2): Retorna o maior ndigitos entre dois BigNumber.

void printArray(int *v, int n): Imprime um vetor.

void inverterArray(int *arr, int tamanho): Inverte um vetor.

BigNumber soma(BigNumber *inp1, BigNumber *inp2): Retorna um BigNumber que é a soma entre dois
outros BigNumber.

BigNumber subtract(BigNumber *inp1, BigNumber *inp2): Retorna um BigNumber que é a subtração entre 
dois outros BigNumber.

BigNumber multiply(BigNumber *num1, BigNumber *num2): Retorna um BigNumber que é a multiplicação 
entre dois outros BigNumber.

int comparaModulo(BigNumber inp1, BigNumber inp2): Retorna um inteiro que representa qual BigNumber
de entrada tem maior módulo.

BigNumber operationHandler(BigNumber inp1, BigNumber inp2, char signal): Lida com os argumentos
recebidos de forma a chamar a função de operação adequada, retornando o BigNumber resultante.

---------------------------------------------------------------------------------------------------------------

