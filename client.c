#include "bignumber.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() 
{
    BigNumber *res = NULL;
    int n = 0;

    for(;;) 
    {
        BigNumber inp1 = scanBigNumber();
        BigNumber inp2 = scanBigNumber();
        char sinal;
        scanf(" %c", &sinal);
        if (limparBuffer() == EOF) 
        {
            free(inp1.digitos);
            free(inp2.digitos);
            break;
        }
        
        BigNumber *tmp = realloc(res, sizeof *res * (n + 1));
        if(tmp == NULL) {
            printf("Erro de alocacao");
            exit(1);
        }
        res = tmp;
        res[n] = operationHandler(&inp1, &inp2, sinal);
        n++;

        free(inp1.digitos);
        free(inp2.digitos);
    }
    
    for (int i = 0; i < n; i++) 
    {
        if (res[i].sinal == '-')
            printf("-");
        printArray(res[i].digitos, res[i].ndigitos);
        printf("\n");
        free(res[i].digitos);
    }

    free(res);
    return 0;
}
