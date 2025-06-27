/*!
🔍 Desafio de Modularização em C: “Calculadora Básica”
Você vai criar um programa que:

-Lê dois números inteiros
-Lê o operador (+, -, *, /)

-Chama uma função diferente para cada operação
-Mostra o resultado da operação escolhida

 O que você precisa aplicar:
-Funções com parâmetros e return
-Uso de if ou switch
-Organização do código em módulos (funções)

 Regras:
-Faça uma função para somar
-Uma para subtrair
-Uma para multiplicar
-Uma para dividir

A função main() apenas chama essas funções com os valores certos

 Exemplo de entrada:

-Digite o primeiro número: 10
-Digite o segundo número: 2
-Digite a operação (+, -, *, /): *

 Saída esperada:

-Resultado: 20

 Dica:
Você pode criar funções assim:

int somar(int a, int b) { return a + b; }

 Bora codar?
Faz aí do seu jeito! Quando terminar, me manda que eu te dou um feedback. Se travar em algum ponto, me fala que eu dou só a dica certa, sem resolver tudo por você.

Topa?

*/

#include <stdio.h>

int main (){

    int num1,num2;
    char operador;

    printf("Digite dois numeros: \n");
    scanf("%d %d",&num1,&num2);

    printf("que operação voce quer realizar?(+ - / *) \n");
    scanf("%c",&char);

    switch(operador){
case '+':
    int soma=num1+num2
    printf("soma:%1",soma);
    break;


    }


    return 0;
}












