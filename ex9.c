#include <stdio.h>

int main()
{
    // Faça um programa que declara um vetor de inteiros com 10 posições
    int vetor[10];
    // um contador que indicará o tamanho utilizado (iniciando em 0). 
    int i, cont = 0;
    
    
    
    for (i = 0; i < 10; i++)
    {
        
        // Peça ao usuário digitar números inteiros positivos para serem armazenados nesse vetor. 
        printf("\n\tDigite um número inteiro [%d]: ", i);
        scanf("%d", &vetor[i]);
        
        if (vetor[i] < 0)
        {
            break;
        }
        
        cont++;
    }
    
    if (cont < 10)
    {
        printf("Quantidade de números inteiros positivos inferior a 10: %d", cont);
    }
    else
    {
        printf("\n\tVocê digitou o máximo permitido: 10 números.\n");
    }
    
    printf("\nValores armazenados no vetor:\n");
    for (i = 0; i < cont; i++)
    {
        printf("Vetor [%d]: %d\n", i, vetor[i]);
    }

    return 0;
}
