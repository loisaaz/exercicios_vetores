#include <stdio.h>

int main() {
    int x[20], y[20], z[20];
    int N, cont;
    
    printf("\n\tDigite quantos números serão lidos (máx 20): ");
    scanf("%d", &N);
    
    if (N > 20)
    {
        printf("\n\tO tamanho máximo é 20, encerrando programa...");
        return 1;
    }

    for (cont = 0;  cont < N; cont ++)
    {
        //printf("\n\tVetor X");
        printf("\n\tDigite o número [%d]: ", cont);
        scanf("%d", &x[cont]);
    }

    for (cont = 0;  cont < N; cont ++)
    {
        //printf("\n\tVetor Y");
        printf("\n\tDigite o número [%d]:", cont);
        scanf("%d", &y[cont]);
    }
    
    for (cont = 0; cont < N; cont++)
    {
        z[cont] = x[cont] * y[cont];
    }
    
    printf("\n\tVetor X: ");
    for (cont = 0; cont < N; cont++) 
    {
        printf("%d ", x[cont]);
    }
    
    printf("\n\tVetor Y: ");
    for (cont = 0; cont < N; cont++) 
    {
        printf("%d ", y[cont]);
    }
    
    printf("\n\tVetor Z: ");
    for (cont = 0; cont < N; cont++) 
    {
        printf("%d ", z[cont]);
    }

    return 0;
}