/*!Exercício 1: Inicialização e Acesso a
Elementos do Vetor.

Enunciado:
 Escreva um programa em C que declare um vetor de 10 elementos inteiros.
 O programa deve ler 10 valores do usuário e armazená-los no vetor.
Em seguida, exiba todos os elementos do vetor

Exemplo de saída
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
//!vetor[i] é o conteúdo, i é a posição

    //for para ler 10 valores do usuário
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
