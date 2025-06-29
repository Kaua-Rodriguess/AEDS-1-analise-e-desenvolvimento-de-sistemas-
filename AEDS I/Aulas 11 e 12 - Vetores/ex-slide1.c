/*Exercício 1: Inicialização e Acesso a Elementos do Vetor
Enunciado:
 Escreva um programa em C que declare um vetor de 10 elementos
inteiros.
 O programa deve ler 10 valores do usuário e armazená-los no vetor.
Em seguida, exiba todos os elementos do vetor.
 Exemplo de saída
 Digite o valor 1: 5
 Digite o valor 2: 12
 Digite o valor 3: 9
 ...
 Vetor: 5 12 9 ...
*/
#include <stdio.h>

int main(){
    int vetor[10];// vetor de 0 até 9

   //!vetor[i] é o conteúdo, i é a posição

    //quardar o valor em cada posição do vetor
    for(int i=0;i<10;i++){
        printf("Digite o valor %d:",i++);
        scanf("%d",&vetor[i]);
    };

    printf("Vetor:\n");

    //exibir o valor de cada posição 
    for(int i=0;i<10;i++){
        printf("valor da posicao %d: %d \n",i,vetor[i]);
    };

    printf("/n");
    return 0;
}
