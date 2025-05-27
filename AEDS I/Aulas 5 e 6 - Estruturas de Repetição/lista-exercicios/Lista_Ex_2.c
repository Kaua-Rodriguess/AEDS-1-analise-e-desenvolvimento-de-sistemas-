/*!2. Faça um programa para imprimir os múltiplos de 5.*/
#include <stdio.h>
int main()
{
    int multiplo=5;

    for(int i=0; i<11; i++)
    {

        int operacao=i*multiplo;
        printf("resultado:%i\n",operacao);
    }


    return 0;
}
