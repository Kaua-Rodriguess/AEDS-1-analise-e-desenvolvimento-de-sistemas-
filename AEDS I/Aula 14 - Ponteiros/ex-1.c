//!Declara��o e exibi��o de ponteiro:
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero=5;
    int *Pnumero=&numero;//ponteiro que aponta para o endere�o da variavel numero

    printf("Endereco:%p\n",*Pnumero);
    printf("Conteudo da variavel:%d",numero);

    return 0;
}

