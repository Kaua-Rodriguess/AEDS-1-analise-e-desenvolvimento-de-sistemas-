#include <stdio.h>

int maximo(int num1, int num2){
    int resposta;
    if(num1>num2){
        resposta=num1;
    } else {
        resposta=num2;
    } 
    return resposta;
}



int main(){
    int num1,num2,maior;

    printf("Digite 2 numeros:");
    scanf("%d %d",&num1,&num2);

    maior=maximo(num2,num1);

    printf("o maior número entros os dois digitados e:%d",maior);



    return 0;
}