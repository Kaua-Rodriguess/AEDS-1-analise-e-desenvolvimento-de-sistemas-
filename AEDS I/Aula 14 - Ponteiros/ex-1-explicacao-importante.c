//!Declara��o e exibi��o de ponteiro:
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero1=5,numero2=10;

    int *Pnumero1=&numero1;//ponteiro que aponta para o endere�o da variavel numero
    int *Pnumero2=&numero2;

    //!endere�o da varivel diretamente-> ("%p", & NOME DA VARI�VEL);=endere�o da variavel
    printf("\nEndereco da variavel (numero) diretamente: %p\n",&numero1);
    printf("Endereco da variavel (numero2) diretamente: %p\n",&numero2);

    //!endere�o de quem o ponteiro esta apotando ->("%p",NOME DO PONTEIRO SEM *);=endere�o da variavel
    printf("\nEndereco de numero via ponteiro: %p\n",Pnumero1);
    printf("Endereco de numero2 via ponteiro: %p\n",Pnumero2);

    //!endere�o do ponteiro-> ("%P", & NOME DO PONTEIRO SEM *);
    printf("\nEndereco do ponteiro Pnumero: %p\n",&Pnumero1);
    printf("Endereco do ponteiro Pnumero2: %p\n",&Pnumero2);

    //!Conte�do da vari�vel acessado via ponteiro-> ("%d",* NOME DO PONTEIRO);
    printf("\nConteudo de numero via ponteiro: %d\n", *Pnumero1);
    printf("Conteudo de numero2 via ponteiro: %d\n", *Pnumero2);

    return 0;
}

