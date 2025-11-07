//!Declara��o e exibi��o de ponteiro:
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero1=5,numero2=10;

    int *Pnumero1=&numero1;//ponteiro que aponta para o endereço da variavel numero
    int *Pnumero2=&numero2;

    //!endereço da varivel diretamente-> ("%p", & NOME DA VARIÁVEL);=endereço da variavel
    printf("\nEndereco da variavel (numero) diretamente: %p\n",&numero1);
    printf("Endereco da variavel (numero2) diretamente: %p\n",&numero2);

    //!endereço de quem o ponteiro esta apotando ->("%p",NOME DO PONTEIRO SEM *);=endereço da variavel
    printf("\nEndereco de numero via ponteiro: %p\n",Pnumero1);
    printf("Endereco de numero2 via ponteiro: %p\n",Pnumero2);

    //!endereço do ponteiro-> ("%P", & NOME DO PONTEIRO SEM *);
    printf("\nEndereco do ponteiro Pnumero: %p\n",&Pnumero1);
    printf("Endereco do ponteiro Pnumero2: %p\n",&Pnumero2);

    //!Conteúdo da variável acessado via ponteiro-> ("%d",* NOME DO PONTEIRO);
    printf("\nConteudo de numero via ponteiro: %d\n", *Pnumero1);
    printf("Conteudo de numero2 via ponteiro: %d\n", *Pnumero2);

    return 0;
}

