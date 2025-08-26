#include <stdio.h>

int main()
{
    int matriz[3][3];
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
   
    printf("\nMatriz digitada:\n");
    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++) 
        {
            printf("%4d\t", matriz[i][j]);
        }
        printf("\n");
    }
   
    for (j = 0; j < 3; j++) 
    {
        soma += matriz[j][j];
    }
   
    printf("\nSoma da diagonal principal = %d\n", soma);
   
   
    return 0;
}