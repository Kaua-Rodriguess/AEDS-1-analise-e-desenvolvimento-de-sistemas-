#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    //função é y=ax+b y=3*x+15
    //y=preço x= km rodados
    int x;
    const int a=3,b=15;
    printf("quantos km foram rodados:");
    scanf("%i", &x);

    int preco=a*x+b;
    printf("o preço a ser pago pela corrida é:R$%i",preco);

return 0;
}
