#include <stdio.h>
#include <stdlib.h>

typedef struct Car {
    char placa[11];
    char marca[11];
    char modelo[11];
    char cor[11];
    int ano;
} newCar;

//cadastrar 3 carros
//imprimiar as informações de carro no final
int main(){
    newCar carro[3];

    for(int i=0;i<1;i++){
        printf("=====CADASTRO DE CARROS=====\n");
        printf("INSIRA AS SEGUINTES INFORMACOES:\n");

        printf("PLACA:");
        fgets(carro[i].placa,8,stdin);
        
        printf("MARCA:");
        fgets(carro[i].marca,10,stdin);
        
        printf("MODELO:");
        fgets(carro[i].modelo,8,stdin);
        
        printf("COR:");
        fgets(carro[i].cor,10,stdin);
        
        printf("ANO:");
        scanf("%d",&carro[i].ano);
        getchar();
    } 

    printf("\n=====CARROS CADASTRADOS=====\n");
    for(int i=0;i<1;i++){
        printf("CARRO %d\n",i+1);
        printf("PLACA: %s\n",carro[i].placa);
        printf("MARCA:%s\n",carro[i].marca);
        printf("MODELO:%s\n",carro[i].modelo);
        printf("COR:%s\n",carro[i].cor);
        printf("ANO:%d\n",carro[i].ano);
    }


    return 0;
}