//!Atribuição por ponteiro:
#include <stdio.h>
#include <stdlib.h>

void dobro(int *Pnumero);

int main()
{
    int numero;
    printf("Digite um numero para calcular o dobro:");
    scanf("%d",&numero);

    dobro(&numero);

    printf("\n O dobro e: %d!",numero);

    return 0;
}

void dobro(int*Pnumero){
    *Pnumero*=2;
    //ou *Pnumero=*Pnumero*2;
}
