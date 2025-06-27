#include <stdio.h>
int main(){
    float r;
    printf("area");
    scanf("%f", &r);/*valor do meu raio*/
    float area=3.14*(r*r);/*crio uma varialvel que calcula a area com base no valor do meu r*/
    printf("o resultado é:%.2f", area);
    return 0;
}


