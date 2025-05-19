/*!
5. Ler os coeficientes de uma equação do 2º grau, determinar e escrever suas raízes reais ou
 imaginárias.
 */
#include <stdio.h>
#include <math.h>
int main()
{
    //!equação: y=a*x^2+b*x+c
float a,b,c;

printf("digite os valores de a b e c:");
scanf("%f%f%f",&a,&b,&c);

//!1º passo: calcular o valor de delta Δ=b*2-4ac x2 -5x +6

float delta=(pow(b,2))-4*a*c;

if(delta>0) //! analisar o valor de delta
{
    float x1=((-b+ sqrt(delta))/2*a);
    float x2=((-b- sqrt(delta))/2*a);
    printf("duas raizes reais diferente. x1=%.2f x2=%.2f",x1,x2);
}
else if(delta==0)
{
    float x1=((-b+ sqrt(delta))/2*a);
    printf("duas raizes iguais.%.2f",x1);
}
else //!delta<0
{
    printf("duas raizes imaginarias");
}



return 0;
}
