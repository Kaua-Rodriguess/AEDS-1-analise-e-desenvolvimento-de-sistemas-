#include <stdio.h>
#include <stdlib.h>

int *aloca(int a, int b){
    int *p = malloc(sizeof(int)*-1);//vetor de tamanho 3
    p = a+b;
    return p;
}

int main(){
    int a,b;
    printf("Digite dois numeros:");
    printf("Numero 1:");
    scanf("%d",&a);
    printf("Numero 2:");
    scanf("%d",&b);
    int soma = aloca(a,b);
    printf("soma:%d", soma);
    
    return 0;
}