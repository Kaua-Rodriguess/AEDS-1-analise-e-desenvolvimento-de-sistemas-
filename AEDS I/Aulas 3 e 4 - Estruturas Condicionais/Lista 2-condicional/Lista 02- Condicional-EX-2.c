/*! 2. Fazer um programa para ler dois números inteiros e calcular e imprimir a diferença desses
 números. Depois, se o segundo número for diferente de zero, fazer a divisão do primeiro
 pelo segundo.
 1ºler dois números inteiros
 2ºcalcular e imprimir a diferença desses números
 3ºse o segundo número for diferente de zero, fazer a divisão do primeiro
 pelo segundo.

 */
#include <stdio.h>

int main(){

int a,b;
printf("Digite dois numeros:");
scanf("%d %d",&a,&b);

if(a>b){
        int diferenca=a-b;
        printf ("Diferenca:%d",diferenca);

}
else if(b>a){
    int diferenca=b-a;
        printf ("Diferenca:%d\n",diferenca);
}
else
{
    printf("os numeros sao iguais:%d",a);
}

if(b!=0)
{
    int divisao = a/b;
    printf("\n divisao:%d",divisao);
}



return 0;
}
