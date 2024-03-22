//---------------------------------------------------------------------
//Escreva um programa que contenha duas variáveis inteiras. Compare
//seus endereços e exiba o maior endereço.
//---------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void gerar_ints(int *point1, int *point2)
{
    srand(time(NULL));

    *point1 = (int) rand();
    *point2 = (int) rand()+1;

}

int main()
{
    int num1, num2; 

    int *point1 = &num1;
    int *point2 = &num2;

    gerar_ints(point1, point2);

    printf("\ninteiros gerados:\nnum1 = %d\nnum2 = %d\n", num1, num2);

    printf("\n valor do endereço de ponteiro 1 e em int: %p, %i", point1, point1);
    printf("\n valor do endereço de ponteiro 2  e em int: %p, %i", point2, point2);

    ((point1 > point2) ? printf("\nnumero do ponteiro 1 eh maior") : 
        ((point1 < point2) ? printf("\nnumero do ponteiro 2 eh maior") :
            printf("\nsão iguais")));


    return 0;
}
