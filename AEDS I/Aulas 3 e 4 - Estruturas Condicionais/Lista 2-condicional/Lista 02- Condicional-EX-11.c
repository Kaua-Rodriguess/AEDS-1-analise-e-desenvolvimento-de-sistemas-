/*!
11. Ler um número inteiro.
 • Se ele for 1 ou 2, ler as medidas dos lados de um retângulo, calcular e escrever a área
 do círculo circunscrito a este retângulo.
 • Se for 3 ou 4 ou 5, ler a medida do raio de um círculo. Calcular e escrever a área do
 quadrado inscrito no mesmo.
 • Se for outro número inteiro que não estes, ler a medida do lado de um quadrado,
 calcular e escrever a área da coroa circular formada pelo círculo inscrito e circunscrito
 a este quadrado.
*/
//area de circulo: 2*pi*r² ou 2*3.14*pow(r,2)
//área de quadrado: lado *lado ou a² ou pow(a,2)

#include <stdio.h>
#include <math.h>

int main()
{
    int num;
    printf("Digite um numero:/n");
        scanf("%i",&num);

    if( num==1 || num==2);
    {
        float base, altura;

        printf("Digite a base e a altura de um retangulo:\n");
        scanf("%f %f",&base,&altura);

        float area=3.14/4 * sqrt(pow(base,2))+(pow(altura,2));
            printf("a area do circulo circunscrito e:/n",area);

            //área do círculo circunscrito: A=π*( raiz b²+bh²) area= 3.14/4 * sqrt(pow(b,2)+(pow(h,2)
    } //

    return 0;
}
