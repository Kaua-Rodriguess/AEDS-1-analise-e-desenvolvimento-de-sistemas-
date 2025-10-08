// crie um vetor de tamanho 5 que leia a idade de n alunos e calcule sua média 
#include <stdio.h>

int main(){
    int idade[5],soma=0;
    float media;

    for(int i=0;i<5;i++){
        printf("\nDigite idade %d:\n",i+1); //guardo idade de 5 alunos  
        scanf("%d",&idade[i]);
    }
    
    for(int i=0;i<5;i++)
    {
        soma=soma+idade[i]; //guardo a soma das notas de 5 alunos
    }

    printf("Media das idade lidas:%2.f \n",media=soma/5);

    return 0;
}

