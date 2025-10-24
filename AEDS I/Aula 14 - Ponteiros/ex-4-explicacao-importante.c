#include <stdio.h>
void percorreVetor(int *ptr){
    for(int i=0;i<10;i++){
        //continuo apontando para o primeiro elemento/casa do vetor,
        //no entanto estou printando o conteúdo de CADA ELEMENTO/CASA do meu vetor.     
        printf("\n[%d]:%d",i,*(ptr+i));
    }
}

int main(){
    int vetor[10];

    printf("Digite um numero:\n");
    for(int i=0;i<10;i++){
        printf("[%d]:",i);
        scanf("%d",&vetor[i]);//vetor[1],vetor[2],vetor[3]...
    }

    printf("\nConteudo do vetor percorrendo com ponteiro:");
    percorreVetor(vetor);// int *ptr=vetor aponto para o primeiro elemento/casa do vetor
    
    return 0;
}

