/******************************************************************************

    Elabore um programa que leia uma matriz de reais 10x10 e determine:
    A soma da linha 4.
    O menor elemento da coluna 5.
    O maior elemento da diagonal principal e sua posição (linha e coluna).

*******************************************************************************/

#include <stdio.h>

int main()
{
    int matriz[10][10];
    int i, j, soma = 0, menor, maior, linha = 0, coluna = 0;
    int valor =1;
    
     // Preenche a matriz com valores de 1 até 100
    for (i = 0; i < 10; i++) 
    {
        for (j = 0; j < 10; j++) 
        {
            matriz[i][j] = valor++;
        }
    }

    for (j = 0; j < 10; j++)
    {
        soma += matriz[3][j]; // percorre a linha 3 e soma os elementos
    }
        
    // menor elemento da coluna 5.
    menor = matriz[0][4];
    for (j = 0; j < 10; j++)
    {
        if (matriz[i][4] < menor)
        {
            menor = matriz[i][4];
        }
    }
    
    // maior elemento da diagonal principal e sua posição (linha e coluna)
    maior = matriz[0][0];
    for (i = 0; i < 10; i++)
    {
        if (matriz[i][i] > maior)
        {
            maior = matriz[i][i];
            linha = i;
            coluna = i;
        }
    }

    printf("A soma da linha 4: %d", soma);
    printf("O menor elemento da coluna 5: %d", menor);
    printf("O maior elemento da diagonal principal: %d\n e sua posição: [%d][%d]", maior, linha, coluna);
    
    return 0;
}
