/*!Exerc�cio 5) Crie um programa em C que solicite ao usu�rio dois n�meros inteiros. Em
seguida, calcule e exiba a soma, o produto e a diferen�a entre eles.*/

#include <stdio.h>

int main(){
    int n1,n2,soma,produto,diferenca;

    printf("Digite dois numeros:\n");
    scanf("%d %d",&n1,&n2);

    soma=n1+n2;
    produto=n1/n2;
    diferenca=n1-n2;

    printf("soma:%d produto:%d diferenca:%d",soma,produto,diferenca);

    return 0;
}
