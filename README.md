Projeto realizado em conjunto com Felipe Bittar para a disciplina Programação Estruturada - UFABC

Objetivo: criar um sistema capaz de realizar operações de soma, subtração e multiplicação
com números muito grandes utilizando a linguagem C

Uma explicação de como foi representado o BigNumber:

O nosso tipo bignumber foi representado por um struct data “BigNumber” que
armazena as seguintes propriedades: int *digitos, int ndigitos e char sinal; Eles
representavam, respectivamente, um vetor com os dígitos numéricos digitados na entrada
pelo usuário, o número de dígitos numéricos dessa entrada (o tamanho do vetor digitos) e o
sinal da entrada.

Interface pública do tipo BigNumber (assinaturas):

void limparBuffer(): Limpa o buffer das entradas, removendo os ‘\n’.

BigNumber scanBigNumber(): Lê uma linha de input do usuário e armazena os dados
numa variável do tipo BigNumber que é retornada pela função.

void addZeros(BigNumber *inp, int n): Adiciona zeros em um vetor digitos de uma
variável BigNumber até que esse vetor tenha tamanho igual a n (ex: entrada1 = 12,
entrada2 = 1, addzeros faz com que fique 12 e 01).

int tamanhoDoMaiorArray(BigNumber *inp1, BigNumber *inp2): Encontra, antes de usar
o addZeros, qual vetor digitos de dois BigNumbers tem maior tamanho.

void printArray(int *v, int n): Imprime um vetor.

void inverterArray(int *arr, int tamanho): Inverte um vetor (ex: {1, 2, 3, 4} passa a ser {4,
3, 2, 1}).

BigNumber soma(BigNumber *inp1, BigNumber *inp2): Realiza a soma entre dois
vetores de digitos (BigNumber.digitos). O programa faz isso simulando método que fazemos
“no papel” as contas.

BigNumber subtract(BigNumber *inp1, BigNumber *inp2): Realiza a subtração entre
dois vetores de digitos (BigNumber.digitos). O programa faz isso simulando método que
fazemos “no papel” as contas.

BigNumber multiply(BigNumber *num1, BigNumber *num2): Realiza a multiplicação
entre dois vetores de digitos (BigNumber.digitos). O programa faz isso simulando método
que fazemos “no papel” as contas.

int comparaModulo(BigNumber inp1, BigNumber inp2): Analisa qual das duas entradas
tem maior valor em módulo.

BigNumber operationHandler(BigNumber inp1, BigNumber inp2, char signal): Analisa
os sinais das entradas e da operação que será feita e decide como serão feitas as
operações (Por exemplo se as entradas são: 2, -3 e -, ele faz a soma de 2 com 3, pois 2-
(-3) = 2+3).
