/*!Exercício 8) Faça um programa que leia 4 notas de 4 alunos, calcule e mostre na tela a
soma e a média aritmética das notas. */

#include <stdio.h>
int main(){
    int n1,n2,n3,n4,soma;
    float media;

    printf("Aluno 1 digite sua nota:");
    scanf("%d",&n1);

    printf("Aluno 2 digite sua nota:");
    scanf("%d",&n2);

    printf("Aluno 3 digite sua nota:");
    scanf("%d",&n3);

    printf("Aluno 4 digite sua nota:");
    scanf("%d",&n4);

    soma=n1+n2+n3+n4;

    media=soma/3;

    printf("soma das notas:%i \nmedia das notas:%.2f",soma,media);




    return 0;
}
