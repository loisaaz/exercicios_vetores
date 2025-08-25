#include <stdio.h>

int main()
{
    
    int vec[21], n, i, indexMaior, indexMenor;
    
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
        scanf("%d", &vec[i]);
    }
    
    int maior = vec[0];
    int menor = vec[0];
    
    for (i = 1; i < n; i++)
    {
        if (vec[i] > maior)  
        {
            maior = vec[i];
            indexMaior = i;
        }
        if (vec[i] < menor)
        {
            menor = vec[i];
            indexMenor = i;
        }
    }
    
    for (i = 0; i < n; i++)
    {
        printf("\tVetor [%d]: %d\n", i,vec[i]);
    }
        printf("\n\tMaior numero: %d e sua posição [%d]", maior, indexMaior);
        printf("\tMenor numero: %d e sua posição [%d]", menor, indexMenor);

    
    return 0;
}
