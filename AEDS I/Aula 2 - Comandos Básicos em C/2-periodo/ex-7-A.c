#include <stdio.h>

int main(){
    float raio;
    float pi=3.14;
    float perimetro;

    printf("Digite o valor do raio:");
    scanf("%f",&raio);

    perimetro=2*pi*raio;

    printf("o perimetro e: %.2f",perimetro);


    return 0;
}