/*
15. Faça um programa que peça ao usuário um número de 1 a 7 e exiba o dia da 
semana correspondente.  Obs: use switch case. 
*/
#include <stdio.h>

int main(){
    int dia;

    printf("Digite um numero de 1 a 7,sera informado a voce o dia da 7semana correspondente:\n");
    scanf("%d",&dia);

    switch(dia)
    {
    case 1:
        printf("Segunda-Feira!");
        break;

        case 2:
        printf("Terca-Feira");
        break;

        case 3:
        printf("Quarta-feira");
        break;

        case 4:
        printf("Quinta-feira");
        break;

        case 5:
        printf("Sexta-feira");
        break;

        case 6:
        printf("Sabado");
        break;

        case 7:
        printf("Domingo");
        break;

    }
    return 0;
}