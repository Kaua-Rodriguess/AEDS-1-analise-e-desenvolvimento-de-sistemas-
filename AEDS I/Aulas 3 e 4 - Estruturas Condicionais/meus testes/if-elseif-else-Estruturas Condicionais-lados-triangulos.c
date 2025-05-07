/*Estrutura sequencial: ler os valores dos catetos de um triângulo retângulo
   e mostrar a hipotenusa */
   #include <stdio.h>
   #include <math.h>
   //o quadrado da hipotenusa é igual à soma dos quadrados dos catetos
   //a²=b²+c²
   //teste, a gente sabe que quando os catetos são 4 e 3 a hipotesa é igual a 5
   int main(){

   float b,c;
   /*cateto b*/
   printf("cateto b:");
   scanf("%f",&b);

   /*cateto c*/
   printf("cateto c:");
   scanf("%f",&c);

   float a=sqrt((pow(b,2)+pow(c,2)));

   printf("hipotenusa:%.1f",a);





   return 0;
   }
