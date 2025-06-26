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

    for(int i=0;i<=9;i++){
        printf("Digite um valor:\n");
        scanf("%d",&vetor[i]);// endereço da posição i do vetor
    };


    return 0;
}