#include <stdio.h>
void soma(int *ptr,int tamanho);

int main(){
    int n;
    printf("Digite o tamanho do vetor:");
    scanf("%d",&n);
    int vetor[n];
    
    printf("\nDigite o conteudo do vetor:\n");
    for(int i=0;i<n;i++){
        printf("[%d]:",i);
        scanf("%d",&vetor[i]);
    }

    soma(vetor,n);

    return 0;
}

void soma(int *ptr,int tamanho){
    int soma=0;
    for(int i=0;i<tamanho;i++){
        soma=soma+*(ptr+i);//estou pegando o conteudo de cada elemento e armazenando em int soma
    }
    printf("Soma dos elementos do vetor: %d",soma);
}