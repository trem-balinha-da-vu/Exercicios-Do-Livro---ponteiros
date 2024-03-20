//--------------------------------------------------------------------------
//Crie um programa que contenha uma matriz de float contendo três linhas
//e três colunas. Imprima o endereço de cada posição dessa matriz.
//--------------------------------------------------------------------------

#include <stdio.h>
#include<stdlib.h>

#define LINHAS 3
#define COLUNAS 3
#define TAMANHO_MATRIZ 3



int main()
{
    float **matriz;

    matriz = malloc(TAMANHO_MATRIZ * sizeof(float *));

    for (int i = 0; i < LINHAS; i++)
    {
        for (int j = 0; j < COLUNAS; j++)
        {
            printf("\n endereco da posicao [%d][%d]: %p",i, j, *(matriz + i) + j);
        }
    }
    
    free(matriz);

    return 0;

}