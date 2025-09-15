/*
16. Faça um programa que peça ao usuário um número de 1 a 12 e exiba o mês 
correspondente. Obs: use switch case. 
*/
#include <stdlib.h>
#include <stdio.h>

int main(){
    int mes;
    printf("Digite um numero de 1 a 12, sera informado a voce o dia do mes correspondente: \n");
    scanf("%d",&mes);

    switch(mes){
        case 1:
        printf("Janeiro");
        break;

        case 2:
        printf("Fevereiro");
        break;

        case 3:
        printf("Marco");
        break;

        case 4:
        printf("Abril");
        break;

        case 5:
        printf("Maio");
        break;

        case 6:
        printf("Junho");
        break;
        
        case 7:
        printf("Julho");
        break;
        
        case 8:
        printf("Agosto");
        break;
        
        case 9:
        printf("Setembro");
        break;
        
        case 10:
        printf("Outubro");
        break;
        
        case 11:
        printf("Novembro");
        break;
        
        case 12:
        printf("Dezembro");
        break;
    }

    return 0;
}