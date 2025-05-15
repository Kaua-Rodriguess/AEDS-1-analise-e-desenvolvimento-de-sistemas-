/*!Leia 3 nmeros inteiros, selecione o menor e o maior e imprima
os seus respectivos valores na tela*/

#include<stdio.h>

int main(){
int a,b,c;

printf("valor a:");
scanf("%i",&a);

printf("valor b:");
scanf("%i",&b);

printf("valor c:");
scanf("%i",&c);
//  !=(significa diferente) ||(significa ou)
 //exemplo: a=3 b=2 c=1

 if(a>=b && a>=c)
 {
     printf("maior:%i",a);
 }
else if(b>=a && b>=c)
{
    printf("maior:%i",b);
}
else
{
    printf("maior:%i",c);
}

printf("\n");

if(a<=b && a<=c)
 {
     printf("menor:%i",a);
 }
else if(b<=a && b<=c)
{
    printf("menor:%i",b);
}
else
{
    printf("menor:%i",c);
}

return 0;
}
