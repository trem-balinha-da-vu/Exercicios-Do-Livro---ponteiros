//---------------------------------------------------------------
//Crie um programa que contenha um array de inteiros contendo cinco
//elementos. Utilizando apenas aritmética de ponteiros, leia esse array do
//teclado e imprima o dobro de cada valor lido.
//----------------------------------------------------------------

#include <stdio.h>

int main()
{
    int array[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &(*(array + i))); 
    }

    printf("\nValores dobrados:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *(array + i) * 2);
    }
    printf("\n");

    return 0;
}
