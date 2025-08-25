#include <stdio.h>

int main()
{
    
    int x[20], y[20], n, i;
    
    printf("\n\tDigite quantos números serão lidos (máx 20): ");
    scanf("%d", &n);
    
    if (n < 1 || n > 20)
    {
        printf("\n\tO tamanho máximo é 20, encerrando programa...");
        return 1;
        
    }
    for (i = 0; i < n; i++)
    {
        printf("\n\tDigite o número [%d]: ", i);
        scanf("%d", &x[i]);
    }
    
    for (i = n-1; i >= 0; i--)// i começa no final e vai ate o inicio -> 0
    {
        y[n-1 - i] = x[i];
        
    }
    
    printf("Vetor X:");
    for (i = 0; i < n; i++)
    {
        printf("\n");
        printf("[%d]: %d", i, x[i]);
    }
    
    printf("\n\n");
    printf("Vetor Y:");
    for (i = 0; i < n; i++)
    {
        printf("\n");
        printf("[%d]: %d", i, y[i]);
    }
  
    // Gere um segundo vetor Y com os valores do vetor X em ordem inversa. 
    // Imprimir o vetor X e vetor com a ordem inversa.
    
    
    return 0;
}
