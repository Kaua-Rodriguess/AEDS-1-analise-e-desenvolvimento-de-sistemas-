/*! O banco do Zé abriu uma linha de crédito para os seus clientes.
O valor máximo da prestação não poderá ultrapassar 40% do
salário bruto. Faça um algoritmo que permita entrar com o
salário bruto e o valor da prestação e informar se o  empréstimo
será concedido.*/

#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"");

 float sb,vp;// salário bruto e valor da prestação
//!aprende de uma vez por todas voce não coloca nada no print f a não ser texto se vc escanear, %f... &, nada
 printf("salário bruto:\n");
 scanf("%f",&sb);

printf("valor da prestação:\n");
 scanf("%f",&vp);

 const float desconto= 0.4;

if(vp<=desconto*sb)
{
  printf("emprestimo sera concedido.");
}
else
{
   printf("emprestimo negado.");
}






return 0;
}
