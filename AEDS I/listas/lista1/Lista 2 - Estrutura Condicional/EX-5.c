/*!
5. Faça um programa que leia uma nota de 0 a 10 e exiba o conceito correspondente:
● A (9 até 10)
● B (7 até 9)
● C (5 até 7)
● D (3 até 5)
● E (0 até 3)
Switch só pode ser usado com expressões
representadas por inteiros
*/
#include <stdio.h>

int main(){
    int n;

    printf("Digite sua nota:");
    scanf("%d",&n);


    if(n>=9 && n<=10){
        printf("A");
    }
    else if(n>=7 && n<=9){
        printf("B");
    }
    else if(n>=5 && n<=7){
        printf("C");
    }
    else if(n>=3 && n<=5){
        printf("D");
    }
    else{
        printf("E");
    }





    return 0;
}
