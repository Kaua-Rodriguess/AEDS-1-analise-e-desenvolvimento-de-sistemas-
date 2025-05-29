/*!
8. Ler dois valores reais. Calcular e escrever o quociente do primeiro pelo segundo se este
 for diferente de zero.
    -calcular e escrever o quociente: printar na tela  resultado da divisão dos dois números inteiros ex:
    6/3 printa 2
    */
 #include <stdio.h>

 int main(){

 float x,y;

 printf("digite dois valores:\n");
 scanf("%f %f",&x,&y);

 if(y!=0)
 {
     float quociente= x/y;//Calcular
     printf("o quociente da divisao de %.2f por %.2f e:%.2f\n",x,y,quociente); //escrever o quociente do primeiro pelo segundo

 }
 else {
    printf("nao existe divisao de um numero por zero!");
 }
 return 0;
 }
