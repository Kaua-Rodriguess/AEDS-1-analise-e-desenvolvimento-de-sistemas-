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

int par(int num){
    int resposta = num*2;
    return resposta;
}

int main(){

int v1;//valor

printf("digite a posicao na sequencia que vc quer o valor:\n");
scanf("%i",&v1);

int resultadoP= par(v1);//x vai receber o valor da função par, passando a variável num como parametro
printf("o valor na posicao %i e: %i",v1,resultadoP);


return 0;
}
