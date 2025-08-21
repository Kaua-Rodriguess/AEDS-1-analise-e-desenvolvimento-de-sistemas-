/*!
10. Faça um programa que leia a idade de uma pessoa e classifique-a como:
● Criança (0 até 12 anos)
● Adolescente (13 até 17 anos)
● Adulto (18 até 64 anos)
● Idoso (65+ anos)
*/
#include <stdlib.h>
#include <stdio.h>
int main()
{
int idade;

 printf("digite sua idade:");
 scanf("%d",&idade);

  if(idade>=0 && idade<=12){
        printf("Crianca");
  }
  else if(idade >=13 && idade<=17){
        printf("Adolescente");
  }
  else if(idade>=18 && idade<=64){
        printf("adulto");
  }
  else{
    printf("Idoso");
  }




return 0;
}
