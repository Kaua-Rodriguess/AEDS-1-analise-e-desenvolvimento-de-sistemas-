/*!
4-fa�a um programa em c que receba as 3 notas de um aluno. O progama
deve exibir a nota final do aluno, que � calculada como a m�dia das tr�s notas
*/

#include <stdio.h>

int main(){
    int n1,n2,n3,soma;
    float media;

    printf("Digite sua primeira nota:");
    scanf("%d",&n1);

    printf("Digite sua segunda nota:");
    scanf("%d",&n2);

    printf("Digite sua terceira nota:");
    scanf("%d",&n3);

    soma=n1+n2+n3;
    media=soma/3;

    printf("A media e: %.2f", media);






    return 0;
}
