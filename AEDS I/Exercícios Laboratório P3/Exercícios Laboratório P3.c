#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 100

typedef struct{
    int codigo;
    char planta[51];
    float temp_atual,temp_min,temp_max;
}estufa;

int main(){
    int n;
    estufa estufa[MAX];
    printf("Digite a quantide de estufas:\n");
    scanf("%d",&n); //!  quantidade de n estufas

     for (int i=0;i<n;i++){
        //! lendo os dados de cada estufa



        printf("Digite o codigo da planta:\n"); //!código da planta
        scanf("%d",&estufa[i].codigo);

        getchar();
        printf("Digite o nome da planta: \n");//!nome da planta
        scanf(" %[^\n]", estufa[i].planta);

        printf("Digite a temperatura atual,minima e maxima da planta:\n");  //! temperaturas da planta
        scanf("%f %f %f", &estufa[i].temp_atual,&estufa[i].temp_min,&estufa[i].temp_max);
    }

        for (int i=0;i<n;i++){
        float atual= estufa[i].temp_atual;
        float min= estufa[i].temp_min;
        float max= estufa[i].temp_max;
        int status=0; //! 0=dentro da faixa,-1=abaixo,1=acima
        float diferenca = 0.0,percentual =0.0;

        //!situação da temperatura
        if (atual < min) {
            status= -1;
            diferenca= min - atual;
            percentual = (diferenca / min) * 100;
        } else if (atual > max) {
            status = 1;
            diferenca = atual - max;
            percentual  = (diferenca / max) * 100;
        }

        //!  somente se estiver fora da faixa
        if (status != 0) {
            printf("Codigo: %d\n", estufa[i].codigo);
            printf("Planta: %s\n", estufa[i].planta);
            printf("Temperatura atual: %.1f\n", atual);
            printf("Intervalo ideal: %.1f a %.1f\n", min, max);
           //! consegui fazer até aqui

    }


        }
return 0;
}
