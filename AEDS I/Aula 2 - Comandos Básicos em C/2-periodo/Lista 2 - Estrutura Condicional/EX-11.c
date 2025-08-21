/*!
11. Faça um programa que leia o salário de um funcionário e aplique um aumento
conforme a regra:
● Até R$ 1.500: 10% de aumento
● De R$ 1.501 a R$ 3.000: 7% de aumento
● Acima de R$ 3.000: 5% de aumento
*/
#include <stdlib.h>
#include <stdio.h>
int main()
{
    float salario;

    printf("Insira o seu salario:");
    scanf("%f",&salario);

    if(salario>=0 && salario<=1500){

        float aumento10=(salario*0.1) + salario;

        printf("aumente de 10porcento %.2f",aumento10);
    }
    else if(salario>=1501 && salario<=3000){

        float aumento7=salario+(salario*0.07);
        printf("aumente de 7 porcento %.2f",aumento7);
    }
    else{
        float aumento5=salario+(salario*0.05);
        printf("aumente de 5 porcento %.2f",aumento5);
    }





return 0;
}
