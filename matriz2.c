/* faça um algoritmo que leia uma matriz M[5][5] de números reais. 
    O programa deve determinar e imprimir na
    tela o maior número da matriz e a sua posição (linha, coluna). */

#include <stdio.h>

int main()
{
    int matriz[5][5];
    int i, j;
    int soma = 0;
   
    printf("Digite os elementos da matrix 3x3:\n");
   
    for (i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) 
        {
            printf("Elemento [%d][%d]:", i,j);
            scanf("%d", &matriz[i][j]);
        }
    }
   
    int maior = matriz[0][0], linha, coluna;

    for (i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) 
        {
            if (matriz[i][j] > maior)
            {
                maior = matriz[i][j];
                linha = i;
                coluna = j;

            }
            
        }
    }
    printf("\nO maior número da matriz é: %d\n e sua posição é [%d][%d]", maior, i,j);
       
    return 0;
}