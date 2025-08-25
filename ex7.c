/*NAO CONSEGUI FAZER VOU CHORAR*/

#include <stdio.h>

int main()
{
    int vetor[5];
    int i, temp;
    
    
    
    for (i = 0; i < 5; i++)
    {
        
        printf("\n\tDigite o número [%d]: ", i);
        scanf("%d", &vetor[i]);
        
    }
    
    int maior = vetor[0];
    int menor = vetor[0];
    
    int indexmenor = 0, indexmaior = 0;
    
    for (i = 0; i < 5; i++)
    {
        if (vetor[i] < menor)
        {
            menor = vetor[i];
            indexmenor = i;
        }
        
        if (vetor[i] > maior)
        {
            maior = vetor[i];
            indexmaior = i;
        }
        
    } 
    
    temp = vetor[0];
    vetor[0] = vetor[indexmenor];
    vetor[indexmenor] = temp;
    
    if(indexmaior == 0) 
    {
        indexmaior = indexmenor; 
    }
    
    temp = vetor[4];
    vetor[4] = vetor[indexmaior];
    vetor[indexmaior] = temp;
    
    for (i = 0; i < 5; i++)
    {
        printf("\tVetor [%d]: %d\n", i,vetor[i]);
    }
        //printf("\n\tMaior numero: %d\n", maior);
       // printf("\tMenor numero: %d\n", menor);
    
    
    /* A partir desse preenchimento, ordene esse
    vetor em ordem crescente (sem criar outro vetor). 
    Em seguida, imprima esse vetor ordenado */

    return 0;
}
