/*! Fa�a um programa para ler dois n�meros inteiros e
 multiplic�-los sem utilizar a
opera��o de multiplica��o

for (in�cio; condi��o; incremento) {
     c�digo que ser� repetido
}

*/
#include <stdio.h>
int main()
{
int n1,n2;

printf("que quero multiplicar:\n");//numero que quero multiplicar
scanf("%i",&n1);

printf("por:\n");// quantos vezes eu quero que o numero 1 repita
scanf("%i",&n2);

 int total=0;

for(int i=0;i<n2;i++){
        total+=n1;
}
printf("Resultado:%i\n",total); //se colocar o printf fora do for ele não printa a repetição

return 0;
}
