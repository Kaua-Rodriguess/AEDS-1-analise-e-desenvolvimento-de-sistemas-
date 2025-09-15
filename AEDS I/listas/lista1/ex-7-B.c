/* (b) Ler três números reais a, b e c e mostrar o valor de y sendo
 y = a + b/(c+a) + 2∗(a−b) + log2(64).*/
#include <stdio.h>
#include <math.h>

int main(){
    float a,b,c,y;

    printf("Digite o valor de A: \n");
    scanf("%f",&a);
    printf("Digite o valor de B: \n");
    scanf("%f",&b);
    printf("Digite o valor de C: \n");
    scanf("%f",&c);

    y=a+b/(c+a)+2*(a-b)+log(64)/log(2);

    printf("o valor de Y e:%.2f",y);





    return 0;
}