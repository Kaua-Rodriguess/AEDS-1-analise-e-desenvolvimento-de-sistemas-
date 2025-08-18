/*!
2. Faça um programa que leia dois números inteiros e exiba o maior deles.
*/
#include <stdio.h>

int main(){
    int a,b;

    printf("Digite um numero:");
    scanf("%d",&a);

    printf("Digite outro numero:");
    scanf("%d",&b);

    if(a>b){
        printf("%d e maior que %d",a,b);
    }
    else if(b>a){
        printf("%d e maior que %d",b,a);
    }
    else{
        printf("sao iguais");
    }


    return 0;
}
