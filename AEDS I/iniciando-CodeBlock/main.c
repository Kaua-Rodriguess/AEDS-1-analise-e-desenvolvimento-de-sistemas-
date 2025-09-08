#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;

    printf("Qual a sua idade?\n");
    scanf("%i",&idade);

    printf("\nTotal de minutos vividos: %i",idade*365*24*60);


    return 0;
}
