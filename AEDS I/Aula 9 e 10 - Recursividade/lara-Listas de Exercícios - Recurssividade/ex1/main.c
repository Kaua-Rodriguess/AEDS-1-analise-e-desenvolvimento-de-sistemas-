/*!
recursividade soma
 */
#include <stdio.h>
#include <stdlib.h>

int recursividadeSoma(int n)
{
    if(n<=0){
        return 0; //tratando meu caso base
    }
    else
    {
        return n+recursividadeSoma(n-1); //! SAÍDA-> se n for 5
    }                                    //! 5 + recursividadeSoma(5-1=4) 5+10=15
}                                        //! 4 + recursividadeSoma(4-1=3) 4+6=10
                                         //! 3 + recursividadeSoma(2)     3+3=6
int main()                               //! 2 + recursividadeSoma(1)     2+1=3
{                                        //! 1 + recursividadeSoma(0)     1   volta somando de baixo pra cimaI ^
    int n;                               //! return 0

    printf("Digite um numero:");
    scanf("%d",&n);

    printf("Resultado da soma dos numeros de 1 até %d soma: %d",n,recursividadeSoma(5));
    return 0;
}
