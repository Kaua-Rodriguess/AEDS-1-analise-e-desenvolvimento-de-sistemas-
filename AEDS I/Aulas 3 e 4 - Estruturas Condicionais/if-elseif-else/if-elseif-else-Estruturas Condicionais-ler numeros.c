/*!Exercício
 • Leia dois números.
• Se um deles for maior que 45, realize a soma dos mesmos.
• Caso contrário, se os dois forem maior que 20, realize a
subtração do maior pelo  menor,
• Senão, se um deles for menor do que 10 e o outro diferente de 0
realize a  divisão do primeiro pelo segundo.
• Finalmente, se nenhum dos casos solicitados for  válido, mostre
seu nome na tela.*/

#include <stdio.h>
int main(){
   float a,b,resultado;

   printf("valor1:");
   scanf("%f",&a);

   printf("valor2:");
   scanf("%f",&b);


   if( a>45)
   {
       resultado=a+b;
        printf("soma %f",resultado);
   }
   else if(a>20 && b>20)
   {
       if(a>b)
       {
           resultado= a-b;
           printf("soma %f",resultado);
       }
       else
       {
           resultado= b-a;
           printf("subtracao %f",resultado);
       }

   }
   else if (a<10 && b!=0)
   {
       resultado=a/b;
        printf("divisao %f",resultado);
   }
   else if (b<10 && a!=0)
   {
       resultado=b/a;
        printf("divisao %f",resultado);
   }

   else
   {
   printf("kaua");
   }








return 0;
}
