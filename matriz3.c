/* Faça um programa que leia uma matriz de inteiros 5x3 e construa sua transposta.
    O programa deverá imprimir as duas matrizes, a original e a transposta. */
int main()
{
    int matriz[5][3] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int matriztransp[3][5], i, j;
    /* transposta é matriz[i][j] = matrizt [j][i] */

    
    printf("Matriz: \n");
    for (i = 0; i < 5; i++) 
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matriz[i][j]);
        }
            printf("\n");
    }
    
    printf("Matriz transposta: \n");
    return 0;
}