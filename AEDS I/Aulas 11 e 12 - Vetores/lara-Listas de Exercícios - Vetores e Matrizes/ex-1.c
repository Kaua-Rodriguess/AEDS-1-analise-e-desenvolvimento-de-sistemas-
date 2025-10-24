/*1. Declaração e leitura de vetor: 
Escreva um programa que leia 10 números inteiros e os armazene em um vetor. 
Em seguida, imprima os valores lidos. */

#include <stdio.h>

int main(){
    int vetor[10]; // no meu código eu vou usar o tamanho do vetor e da matriz apenas para condição de parada

    printf("Digite um numero:\n");
    for(int i=0;i<10;i++){
        printf("Numero %d:",i+1);
        scanf("%d",&vetor[i]);
    }

    printf("Posicao:\n");
    for(int i=0;i<10;i++){
        printf("[%d]%d\n",i,vetor[i]);
    }

    return 0;
}