/*
13. Faça um programa que, caso os lados formem um triângulo válido, classifique-o 
como equilátero, isósceles ou escaleno. 
*/
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int a,b,c;

    printf("digite 3 números: \n");
    scanf("%i %i %i",&a,&b,&c);

    if(a+b>c && a+c>b && b+c>a){
        printf("\n  triãngulo que atende os criterios de existencia! \n");  
        
        if(a==b && b==c){
            printf(" equilatero,todos os lados iguais!");
        }
        else if(a==b || b==c || a==c){//pelo menos dois lado tem que ser iguais
            printf(" isoceles, pelos menos dois lados iguais!");
        }
        else if(a!=b && b!=c && a!=c){
            printf("  escaleno,todos os lados diferentes!");
        }
    }
        
     
        else{
            printf("\n Nao e um triangulo valido!");
        }



 return 0;
}