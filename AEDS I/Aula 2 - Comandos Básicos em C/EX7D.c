/* (d) Ler o valor do salário mínimo e o valor do salário de uma pessoa, calcular e mostrar
 quantos salários mínimos essa pessoa ganha.*/

#include <stdio.h>
int main(){
float sm=1512;//salário minimo
float smp;//salário minimo pessoa

printf("informe o seu salario:");
scanf("%f",&smp);

printf("salario minimo que voce recebe:%.1f",smp/sm);

return 0;

}

