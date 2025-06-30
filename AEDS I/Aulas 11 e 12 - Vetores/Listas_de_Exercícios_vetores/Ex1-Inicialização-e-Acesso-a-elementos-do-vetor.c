/*!Exerc�cio 1: Inicializa��o e Acesso a
Elementos do Vetor.

Enunciado:
 Escreva um programa em C que declare um vetor de 10 elementos inteiros.
 O programa deve ler 10 valores do usu�rio e armazen�-los no vetor.
Em seguida, exiba todos os elementos do vetor

Exemplo de sa�da
 Digite o valor 1: 5
 Digite o valor 2: 12
 Digite o valor 3: 9
 ...
 Vetor: 5 12 9 ...

*/
#include <stdio.h>
int main()
{
    int vetor[10];
//!vetor[i] � o conte�do, i � a posi��o

    //for para ler 10 valores do usu�rio
    for(int i=0; i<10; i++)
    {
        printf("Digite o valor %d:",i);
        scanf("%d",&vetor[i]);
    }

    //for para  exibir os elementos do vetor
    for(int i=0;i<10;i++){
        printf("vetor %d e: %d \n",i,vetor[i]);
    }

    printf("\n");

    return 0;
}
