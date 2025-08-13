
/*!
5-faça um programa que recebe um numero inteiro e escreva na tela o seu quadrado
*/

#include <stdio.h>
#include <math.h>

int main(){
    int n,quadrado;
    printf("Digite um numero:");
    scanf("%i",&n);

    quadrado=pow(n,2);

    printf("o quadrado e:%d",quadrado);

    return 0;
}
