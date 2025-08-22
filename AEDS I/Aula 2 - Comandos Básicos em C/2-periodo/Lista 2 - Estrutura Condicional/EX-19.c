/*!
19. Faça um programa que leia a idade de uma pessoa e informe se ela tem:
● "Voto obrigatório" (18-70 anos)
● "Voto facultativo" (16-17 anos ou acima de 70 anos)
● “Não pode votar" (menor de 16 anos)
*/
#include <stdio.h>

int main(){
    int idade;
    printf("Digite sua idade:");
    scanf("%d",&idade);

    if(idade>=18 && idade<=70){
        printf("Voto Obrigatorio");
    }
    else if(idade==16 || idade==17 || idade>70){
            printf("Voto facultativo!");
    }
    else{
        printf("Nao pode votar!");
    }

    return 0;
}
