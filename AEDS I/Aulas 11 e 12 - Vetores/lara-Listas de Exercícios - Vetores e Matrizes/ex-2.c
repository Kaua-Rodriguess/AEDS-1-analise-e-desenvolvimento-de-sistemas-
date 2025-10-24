/*2. Soma dos elementos: 
Crie um programa que leia 10 números inteiros, armazene em um vetor e exiba a 
soma de todos os elementos. */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[10],soma=0;
    printf("Digite 10 numeros:\n");
    for(int i=0;i<10;i++){
        printf("numero %d:",i+1); 
        scanf("%d",&vetor[i]);
    }
    for(int i=0;i<10;i++){
        soma=soma+vetor[i]; //soma=soma+vetor[0] soma=soma+vetor[1]; 
    }
    printf("soma dos elementos do vetor: %d",soma);
return 0;
}