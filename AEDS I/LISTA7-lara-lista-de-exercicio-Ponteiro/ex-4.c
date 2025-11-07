#include <stdio.h>
void percorreVetor(int *ptr){
    for(int i=0;i<10;i++){
        printf("[%d]:%d \n",i,*(ptr+i));
    }
}

int main(){
    int vetor[10];

    printf("insira 10 numeros no vetor:\n");
    for(int i=0;i<10;i++){
        printf("[%d]:",i+1);
        scanf("%d",&vetor[i]);
    }
    printf("\n");
    percorreVetor(vetor);

}