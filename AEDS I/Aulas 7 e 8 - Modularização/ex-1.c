/*!1. Fazer uma funçãoo int par(int n) que recebe um número inteiro n e retorna o n-esimo
 termo da sequencia 2,4,6,8,10,12,...
 int par(parametro)

 main
 x=par(n) argumento

[tipo de retorno] [nome] ([lista de argumentos]) {
 return [variável de retorno]
 }
 */


#include <stdio.h>


int par(int n){
return n*2;
}

int main()
{

int num;

printf("digite a posicao na sequencia que vc quer o valor:\n");
scanf("%i",&num);

int x=par(num);//x vai receber o valor da função par, passando a variável num como parametro 
printf("o valor na posicao %i e: %i",num,x);




return 0;
}
