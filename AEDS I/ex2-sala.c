void ordenaNumeros(int vetor[],int tamanho,int novoVetor[]){
    int j=0;
    for(int i=0;i<6;i++){
        if(vetor[i] < 0){
            novoVetor[j] = vetor[i];
            j ++;
        }
    }
        for(int i=0;i<6;i++){
            if(vetor[i]>0){
                novoVetor[j] = vetor[i];
                j++;
            }
}
for(int i=0;i<6;i++){
    printf("%d",i,novoVetor[i]);
}
}


int main(){
    int vetor[4]={1,2,3,4},tamanho=4,novoVetor[4];

        for(int i=0;i<tamanho;i++){
            printf("vetor[%d]= %d",i,vetor[i]);
        }
        ordenaNumeros(vetor,tamanho,novoVetor);
  return 0;
}