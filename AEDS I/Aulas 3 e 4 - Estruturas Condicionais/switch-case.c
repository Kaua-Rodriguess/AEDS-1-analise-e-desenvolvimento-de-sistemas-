/*!Faça um programa que leia um caractere, identifique-o e escreva
na tela se ele é um ponto, uma vírgula ou outro sinal. User o
comando switch-case.*/
//! switch(escolhe)-case(caso)
//!Em C, a expressão tem que resultar em um CHAR ou INT.

#include <stdio.h>
int main()
{
char a;

printf("digite aqui:");
scanf("%c",&a);

/*switch(a)
{
    //lembre-se caractere se usa aspas simples ''
    case '.' :
    printf("e um ponto");
    break;

    case ',':
    printf("e uma virgula");
    break;

    default:
    printf("nao e um ponto nem uma virgula");
}*/
  switch(a)
  {
  case '.':
    printf("e um ponto");
    break;

  case ',':
    printf("e uma virgula");
    break;

  default:
    printf("nao e um ponto nem uma virgula");
  }


return 0;
}
