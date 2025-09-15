/*
1. Procedimento para mostrar os números em ordem 
Faça um procedimento que recebe 3 valores inteiros e os exibe em ordem 
crescente. Crie um programa que lê 3 valores e aciona o procedimento.
*/
#include <stdio.h>

void ordemCrescente(a,b,c){
    int aux;
    if(a>b){
        aux=a;
        a=b;
        b=aux;
    }
    if(a>c){
        aux=a;
        a=c;
        c=aux;
    }
    if(b>c){
        aux=b;
        b=c;
        c=aux;
    }
    printf("Ordem crescente: %d %d %d\n",a,b,c);
};

int main(){
    int a,b,c;

    printf("Digite 3 valores inteiros:\n");
    scanf("%d %d %d",&a,&b,&c);
    ordemCrescente(a,b,c);
    return 0;
}