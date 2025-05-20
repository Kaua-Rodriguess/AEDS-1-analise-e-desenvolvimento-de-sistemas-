/*! Desenvolva uma funcão que receba como parametro os ponteiros de dois vetores de
5 posições. O procedimento devera Imprimir na tela os valores contidos nos dois
vetores de forma crescente (Utilize porteiros)

Exemplo:

Vetor 1 = 1,2,3,4,5
Vetor 2 = 6,7,8,9,10
Saída: 1,2,3,4,5,6,7,8,9,10
*/

#include <stdio.h>
#include<stdlib.h>

int ordena(int *p1,int *p2){
    int combinado[10];

    for(int i = 0; i < 5; i++){
        combinado[i] = *(p1+i);
        combinado[i+5] = *(p2 + i);
    }

    for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                if(combinado[j] < combinado[j+1]){
                    int temp = combinado [j];
                    combinado[j] = combinado[j+1];
                    combinado[j+1] = temp;
                }
            }

    }

    printf("Valores em ordem crescente: \n");
    for(int i = 9; i > 0; i--){
        printf("\n%d",combinado[i]);
    }
return 0;
}

int main(){

    int *ptr, *ptq;

    ptr = (int*)calloc(5,sizeof(int));

    ptq = (int*)calloc(5,sizeof(int));

    for (int i = 0; i < 5; i++){
        ptr[i] = i+1;
        ptq[i] = i + 6;
        printf("\nVetor1[%d] = %d",i,ptr[i]);
        printf("\nVetor2[%d] = %d\n",i,ptq[i]);
    }

    ordena(ptr,ptq);


    free(ptr);
    free(ptq);


    return 0;
}



