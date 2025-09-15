/*!
8. Faça um programa que leia três números inteiros e exiba o maior deles.
*/
#include <stdio.h>

int main(){
    int a,b,c;
    printf("insira 3 numeros:");
    scanf("%i%i%i",&a,&b,&c);

    if(a>b && a>c){
        printf(" \n%i e o maior numero entre %i e %i",a,b,c);
    }
    else if(b>a && b>c){
        printf("\n %i e o maior numero entre %i e %i",b,a,c);
    }
    else{
       printf("\n %i e o maior numero entra %i e %i",c,a,b);
    }

    return 0;
}
