/*!
 Fa�a um programa que leia um n�mero inteiro N e mostre na tela
os N primeiros  n�meros inteiros �mpares.

leia um n�mero inteiro (scanf)

*/
#include <stdio.h>
int main()
{
int N, i=1;

printf("digite um numero:");
scanf("%i",&N);

printf("os %i primeiros numeros impares sao:\n",N);
while(N>0)
{
    if(i%2 != 0){
    printf("%i \n",i);
    N--;
    }
    i++;

}





return 0;
}
