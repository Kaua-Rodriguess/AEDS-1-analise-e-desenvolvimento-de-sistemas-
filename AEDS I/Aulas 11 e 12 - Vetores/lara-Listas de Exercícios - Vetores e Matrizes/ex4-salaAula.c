/*Faça um algoritimo que leia uma matriz 5 x 5 e imprima a trasnposta*/
//matriz trasposta e o inverso da primeira matriz ex: M=3X2  trasnposta M=2X3
#include <stdio.h>
int main(){

   int a,b;//tamanho da minha matriz a=linha b=coluna
    printf("Digite a quantidade de linhas:\n");
    scanf("%d",&a);
    printf("Digite a quantidade de colunas:\n");
    scanf("%d",&b);

    int m[a][b],trans[b][a];
    printf("Digite o valor para m:\n");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("[%d][%d]",i,j);   //=== Matriz M[a][b]
            scanf("%d",& m[i][j]);
                }
    }

    printf("Matrix original:\n");
    for(int i=0;i<a;i++){
        printf("\n");
        for(int j=0;j<b;j++){
            printf("[%d][%d] %d   ",i,j,m[i][j]);
                }
    }

    printf("\nMatriz transposta:\n");
    for(int i=0;i<b;i++){
        printf("\n");
        for(int j=0;j<a;j++){
            trans[i][j]=m[j][i];
            printf("[%d][%d] %d   ",i,j,trans[i][j]);
        }
    }

    return 0;
}