/*!
    4. Ler os coeficientes de uma equação do primeiro grau (ax + b = 0), calcular e escrever a
    raiz da equação.
    
    -na equação do 1ºgrau meu coeficiente a não pode ser 0. se a=0,
    não é uma equação do 1º grau
    -se a=0 e b for diferente de 0, a equação não tem solução
    -se a=0 e b=0, a equação tem infinitas soluções
*/
    
    #include <stdio.h>
    int main()
    {

    float a,b,x;

    printf("valor de a:");
    scanf("%f",&a); 

    printf("valor de b:");
    scanf("%f",&b); 
    float raiz=-b/a;

    if(a==0 && b!=0)
    {
    printf("a equacao nao tem solucao");
    }

    else if(a==0 && b==0)
    {
    printf("a equacao tem infinitas solucoes ");
    }
    else
    {
    printf("a raiz da equacao e:%.2f",raiz);
    }


    return 0;
    }

