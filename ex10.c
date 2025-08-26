#include <stdio.h>

int main()
{
    int vetor[10] = {1, 2, 3, 4, 5, 6};
    int n = 6; // número de elementos válidos
    int pos = 3; // posição onde queremos inserir
    int novo = 10; // novo elemento
    
    // deslocar elementos para a direita
    for (int i = n; i > pos; i--) {
        vec[i] = vec[i - 1];
    }
    
    // inserir o novo elemento
    vec[pos] = novo;
    
    // atualizar quantidade de elementos
    n++;
    
    int pos = 2; // posição a remover

    // deslocar elementos para a esquerda
    for (int i = pos; i < n - 1; i++) {
        vec[i] = vec[i + 1];
    }
    
    // atualizar quantidade de elementos
    n--;

    return 0;
}

