/*
16. Matriz com alocação dinâmica: 
Implemente um programa que aloque dinamicamente uma matriz 3x3 de inteiros, 
preencha com dados e exiba seu conteúdo.
*/

#include <stdio.h>
#include <stdlib.h>
#define tamanho 3;

int main(){
    /*int vetor[3];
    int *p = malloc(sizeof(int)*3);//alocando dinamicamente 3 espaços na memória
    int matrix[3][3];
    */
    int *ponteiro = malloc(sizeof(int)*9);
    
    printf("PREENCHA A MATRIX:\n");

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("[%d][%d]:",i,j);
            scanf("%d",ponteiro+i); //endereço & da memomória criada
        }
        printf("\n");
    }
   
    printf("CONTEUDO DA MATRIX:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("[%d][%d]:%d\n",i,j,*(ponteiro+i)); //conteudo da memomória criada
        }
        printf("\n");
    }
    
    
    return 0;
}