#include <stdio.h>

int main()
{
    int vetor[20], i, num_par, num_multiplo;
    
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
    
    for (i = 0; i < 20; i++)
    {
        if (vetor[i] % 2 == 0)
        {
            num_par++;
        }
        if (vetor[i] % 5 == 00)
        {
            num_multiplo++;
        }
    }
    printf("\tQuantidade de números pares: %d\n Quantidade de números múltiplos de 5: %d", num_par, num_multiplo); 

    return 0;
}
