/*Faça um programa que leia três números inteiros e os exiba em ordem crescente.*/

possibilidades:
    a<=b<=c
    a<=c<=b
    b<=a<=c
    b<=c<=a
    c<=a<=b
    c<=b<=a

#include <stdio.h>

int main(){
    int a,b,c,temp;

    printf("escreva tres numeros:");
    scanf("%d %d %d", &a,&b,&c);

    if(a<=b && b<=c){
        printf("Ordem crescente dos numeros: %d %d %d",a,b,c);
    }
    else if(b<a && a<c){
        /*int temp=b;
        b=a;
        a=temp;*/
         printf("Ordem crescente dos numeros: %d %d %d",a,b,c);

    }
    else{
        printf("Ordem crescente dos numeros: %d %d %d",a,b,c);
    }

    return 0;
}

