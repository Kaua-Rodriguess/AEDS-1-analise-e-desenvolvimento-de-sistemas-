/*!
7. Faça um programa que leia dois números inteiros e um símbolo de operação
matemática (+, -, *, /), realize a operação e exiba o resultado.
*/

#include <stdio.h>
int main(){
    int n1,n2,soma,subtracao,multiplicacao,divisao;
    char simbolo;

    printf("Digite dois numeros e o simbolo matematico da operacao que vc deseja:");
    scanf("%c %i %i",&n1,&n2,&simbolo);

    switch(simbolo){
    case '+':
        soma=n1+n2;
        printf("%i",soma);

        break;

    case '-':
         subtracao=n1+n2;
        printf("%i",subtracao);

        break;

    case '*':
         soma=n1*n2;
        printf("%i",soma);

        break;
    }


    /*if(simbolo=='+'){
        int adicao=n1+n2;
        printf("%i",adicao);
    }
    else if (simbolo=='-'){
        int subtracao=n1-n2;
        printf("%i",subtracao);
    }
    else if(simbolo=='*'){
        int multiplicacao= n1*n2;
        printf("%i",multiplicacao);
    }
    else {
        int divisao=n1/n2;
        printf("%i",divisao);
    }*/


    return 0;
}
