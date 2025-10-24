#include <stdio.h>
void copiaVetores(int *ptr,int *Pcopia,int tamanho){
    for(int i=0;i<tamanho;i++){
        *Pcopia=*(ptr+i);
        Pcopia++;
    }
}
int main(){
    int n;
    printf("\nDigite o tamanho do vetor:");
    scanf("%d",&n);

    int vetor1[n];
    int vetor2[n];

    printf("Digite o conteudo do Vetor 1:\n");
    for(int i=0;i<n;i++){
        printf("[%d]:",i);
        scanf("%d",&vetor1[i]);
    }

    copiaVetores(vetor1,vetor2,n);

    printf("Vetor2(copia do vetor1):\n");
    for(int i=0;i<n;i++){
        printf("[%d]:%d\n", i, vetor2[i]);
    }

    return 0;
}