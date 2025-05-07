/*! Faça um programa que leia um número inteiro, garanta que o
mesmo está entre 1 e 12 e escreva o nome do mês correspondente.
Use o comando switch-case.*/
//! switch(escolhe)-case(caso)

#include <stdio.h>
int main(){

int mes;

printf("Digite um numero:"); // programa que leia um número inteiro
scanf("%d",&mes);

//garanta que o mesmo está entre 1 e 12
while ( mes<1 || mes>12)
{
    printf("Numero invalido! Digite novamente (1 a 12:)\n");
    scanf("%d",&mes);

}
switch(mes)//e escreva o nome do mês correspondente. Use o comando switch-case
{
 case 1:
    printf("%d - janeiro", mes);
    break;

 case 2:
    printf("fevereiro");
    break;

 case 3:
    printf("Março",mes);
    break;

case 4:
    printf("Abril",mes);
    break;

case 5:
    printf("Maio",mes);
    break;

case 6:
    printf("Junho",mes);
    break;

case 7:
    printf("julho",mes);
    break;

case 8:
    printf("agosto",mes);
    break;

case 9:
    printf("setembro",mes);
    break;

case 10:
    printf("outubro",mes);
    break;

case 11:
    printf("novembro",mes);
    break;

case 12:
    printf("dezembro",mes);
    break;
}




return 0;
}
