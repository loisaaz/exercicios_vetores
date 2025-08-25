#include <stdio.h>

int main()
{
    float vetor[10], soma, media;
    int i, menor_media;
    
    if (i < 0)
    {
        printf("\n\tO número deve ser positivo...");
        return 1;
        
    }
    
    for (i = 0; i < 10; i++)
    {
        printf("\n\tDigite o número [%d]: ", i);
        scanf("%f", &vetor[i]);
    }
    
    for (i = 0; i < 10; i++)
    {
        soma += vetor[i]; 
        
    }    
    
    media = soma / 10;
    
    for (i = 0; i < 10; i++)
    {
        if (vetor[i] < media)
        {
            menor_media++;
        }
    }
    printf("\n");
    printf("\tMédia dos números lidos: %.2f\n", media);
    printf("\tQuantidade de números abaixo da média: %d", menor_media);
    
    /*
    calcule a média dos elementos lidos e quantos elementos são menores que a média.
    x = (1+2+3) / 3 = 6 /3 = 2
    */ 

    return 0;
}
