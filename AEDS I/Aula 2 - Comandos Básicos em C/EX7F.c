/*Ler do teclado um número inteiro com três dígitos (no formato CDU- centena, dezena
 e unidade) e mostrar o número invertido (no formato UDC). O número invertido deve
 ser armazenado em outra variável antes de ser mostrado*/
 #include<stdio.h>
 int main(){
int c,d,u;//centena,dezena,unidade
//  1 2 3
printf("digite um numero de tres digitos:");
scanf("%i%i%i",&c,&d,&u);

int invertido= (u*100)+(d*10)+(c*1);
printf("numero invetido:%i",invertido);


 return 0;
 }

