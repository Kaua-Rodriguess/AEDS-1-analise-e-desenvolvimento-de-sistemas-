//!  1. Ler dois valores reais, determinar e escrever o menor e o maior.
#include <stdio.h>
#include <math.h>

int main(){

int a,b;

printf("digite dois numeros:");
scanf("%d%d",&a,&b);

if(a>b){
    printf("maior:%d\n menor:%d",a,b);
}
else if (b>a){
     printf("maior:%d\n menor:%d",b,a);
}
else
{
 printf("os dois numeros sao iguais:%d",a);
}









return 0;
}