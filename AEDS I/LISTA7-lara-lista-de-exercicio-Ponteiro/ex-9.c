/*9. Leitura e exibição de matriz com ponteiros: 
Escreva um programa que leia uma matriz 3x3 e exiba os elementos utilizando 
ponteiros. */
#include <stdio.h>
int main(){
    int matrix[3][3];

    printf("Insira valores na matrix 3x3:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Matrix [%d][%d]:",i,j);
            scanf("%d",&matrix[i][j]);
        }
        printf("\n");
    }
    printf("Exibicao dos elementos(Matrix via ponteiro):\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            int *ptr=&matrix[i][j];
            printf("[%d][%d]:%d \n",i,j,*ptr);
        }
    }

    
    return 0;
}