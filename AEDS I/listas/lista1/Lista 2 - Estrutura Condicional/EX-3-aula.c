/*Faça um programa que leia três números inteiros e os exiba em ordem crescente.*/

/*possibilidades:
    a<=b<=c
    a<=c<=b
    b<=a<=c
    b<=c<=a
    c<=a<=b
    c<=b<=a*/

#include <stdio.h>

int main(){
    int a,b,c,temp;

    printf("escreva tres numeros:");
    scanf("%d %d %d", &a,&b,&c);

    if(a<=b && b<=c){
        printf("Ordem crescente dos numeros: %d %d %d",a,b,c);
    }
    else if(a<=c && c<=b){
         printf("Ordem crescente dos numeros: %d %d %d",a,c,b);
    }
    else if(b<=a && a<=c){
        printf("Ordem crescente dos numeros: %d %d %d",b,a,c);
    }
    else if(b<=c &&c<=a){
            printf("Ordem crescente dos numeros: %d %d %d",b,c,a);
    }
    else if(c<=a && a<=b){
        printf("Ordem crescente dos numeros: %d %d %d",c,a,b);
    }
    else if(c<=b && b<=a){
        printf("Ordem crescente dos numeros: %d %d %d",c,b,a);
    }

    return 0;
}

