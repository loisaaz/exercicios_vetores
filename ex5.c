
#include <stdio.h>

int main()
{
    int vetor[20], n, i=0;
    
    if (i < 0)
    {
        printf("\n\tO número deve ser positivo...");
        return 1;
        
    }
    
    for (i = 0; i < 20; i++)
    {
        printf("\n\tDigite o número [%d]: ", i);
        scanf("%d", &vetor[i]);
    }
    
    
    
    

    return 0;
}
