#include <stdio.h>

int main()
{
    int n, i1, j1, i2, j2;

    printf("\tDigite o tamanho da Matriz A: ");
    scanf("%d %d", &i1, &j1);

    int A[i1][j1];
   
    printf("\tDigite o tamanho da Matriz B: ");
    scanf("%d %d", &i2, &j2);

    int B[i2][j2];
   
    if (j1 != i2)
    {
        printf("\tNão é possível multiplicar as matrizes");
        return 1;
    }
   
    int i, j;
   
    printf("\tDigite os elementos da Matriz A");
    for (i = 0; i < i1; i++)
    {
        for (j = 0; j < j1; j++)
        {
            printf("\n\tElemento [%d][%d]:", i,j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("\tDigite os elementos da Matriz B");
    for (i = 0; i < i2; i++)
    {
        for (j = 0; j < j2; j++)
        {
            printf("\n\tElemento [%d][%d]:", i,j);
            scanf("%d", &B[i][j]);
        }
    }

    int C[i1][j2]; // matriz produto
    
    for (i = 0; i < i1; i++) 
    {
    for (j = 0; j < j2; j++) 
    {
        C[i][j] = 0;
        
        for (int k = 0; k < j1; k++) 
        {
            C[i][j] += A[i][k] * B[k][j];
        }
    }
}
    

    printf("\tMatriz A:");
    for (i = 0; i < i1; i++)
    {
        for (j = 0; j < j1; j++)
        {
            printf("%d\t", A[i][j]);
        }
    }
    
    printf("\tMatriz B");
    for (i = 0; i < i2; i++)
    {
        for (j = 0; j < j2; j++)
        {
            printf("%d\t", B[i][j]);
        }
    }
    
    printf("Matriz C");
    for (i = 0; i < i1; i++) 
    {
        for (j = 0; j < j2; j++) 
        {
        printf("%d\t", C[i][j]);
        }
    }
    return 0;
}