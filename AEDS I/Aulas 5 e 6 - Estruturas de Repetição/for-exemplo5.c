/*! Faça um programa para ler dois números inteiros e
 multiplicá-los sem utilizar a
operação de multiplicação*/
#include <stdio.h>
int main()
{
int n1,n2,i,soma;

printf("numero1:\n");
scanf("%i",&n1);

printf("n2:\n");
scanf("%i",&n2);

for(i=1;i<= n2;i++){
  soma +=n1;
        printf("produto:%i",soma);

}


return 0;
}
