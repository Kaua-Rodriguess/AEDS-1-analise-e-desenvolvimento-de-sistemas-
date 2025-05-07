/*!Faça um programa que leia dois números a e b e mostre o maior
deles na tela. Resolva usando o if ou ef/else e, depois, resolva
usando o operador ternário.*/

/*! vou fazer os dois aqui, como os dois n rodam no mesmo programa
eu vou trandorma um em comentário, se quiser testa-lo é só transformar
o outro em comentário, e vice e versa*/

#include <stdio.h>
int main()
{
    int a,b;

    printf("valor a:\n");
    scanf("%i",&a);

    printf("valor b:\n");
    scanf("%i",&b);

    /*if(a>b)
    {
        printf("maior valor: %i",a);
    }
    else
    {
        printf("maior valor: %i",b);
    }*/
/*! 📌usando o operador ternário:*/

int maior=(a>b)? a:b;
printf("maior valor:%i",maior);





    return 0;
}
