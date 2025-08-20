#include <stdio.h>

int main(){
    int n=7;
    int tentativa;

    printf("Bem-vindo ao jogo de adivinhacao \n Tente adivinhar o numero secreto entre 1 e 10");
    printf("\n Digite sua tentativa:");
    scanf("%i",&tentativa);
    if(tentativa==n){
        printf("Parabéns voce acertou");
    }
    else {
        printf("Errado! O numero secreto era %i \n FIM do jogo!",n);
    }


    return 0;
}
