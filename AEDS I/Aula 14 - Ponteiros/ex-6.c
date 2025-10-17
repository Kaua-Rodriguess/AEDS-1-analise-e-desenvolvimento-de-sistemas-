#include <stdio.h>
#include <stdbool.h>

int buscarVetor(int *Pvetor,int numero){
    for(int i=0;i<5;i++){
        if(*Pvetor==numero){
            //printf("numero %d esta na posicao [%d]",numero,i);
            return true;
        }
        Pvetor++;
    }
    return false;
}

int main(){
    int numero=10;
    int vetor[5]={1,2,1,3,4};

    if(buscarVetor(vetor,numero)){
        printf("\ntem no vetor!\n");
    }
    else{
        printf("\nnao tem no vetor!\n");
    }
    
    return 0;
}