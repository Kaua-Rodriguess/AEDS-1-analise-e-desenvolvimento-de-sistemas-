/*!Exerc�cio 7) Fa�a um programa que receba um n�mero inteiro e imprima na tela o seu
antecessor e o seu sucessor.ESCREVER A M�O  */

#include <stdio.h>
int main(){
    int n1,antecessor,sucessor;

    printf("Digite um numero:");
    scanf("%d",&n1);

    antecessor=n1-1;
    sucessor=n1+1;

    printf("Seu antecessor e: %d \nSeu sucessor e: %d \n ",antecessor,sucessor);


    return 0;
}
