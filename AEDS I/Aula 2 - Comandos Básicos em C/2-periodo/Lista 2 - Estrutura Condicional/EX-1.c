/*!
1. Faça um programa que leia um número inteiro e informe se ele é par ou ímpar.
*/
#include <stdio.h>

int main(){

 int a;

 printf("Informe um numero inteiro: ");
 scanf("%d",&a);

 if(a%2 == 0){
    printf("O numero informado e par!");
 }
 else{
    printf("O numero informado e impar");
 }


return 0;
}

