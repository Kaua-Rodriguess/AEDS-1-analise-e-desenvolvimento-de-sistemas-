/*!
1. Fa�a um programa que leia um n�mero inteiro e informe se ele � par ou �mpar.
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

