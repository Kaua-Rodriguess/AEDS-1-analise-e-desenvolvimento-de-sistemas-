//!Atribuição por ponteiro:
#include <stdio.h>
#include <stdlib.h>
void dobro(int *Pnumero){
    *Pnumero*=2;
}
int main()
{
    int numero;
    printf("Digite um numero:");
    scanf("%d",&numero);
    dobro(&numero);
    printf("Calculando o dobro via ponteiro!\nO dobro e:%d",numero);

    return 0;
}
