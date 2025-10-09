#include <stdio.h>
void maisDois(int *Pa,int *Pb){//2º) recebo esse endereço por meio de um ponteiro " * nome do ponteiro "  
    *Pa+=2; //3º)meu ponteiro soma mais  dois para o endereço da variavel que ele esta apontando, que é int a=5, então a passa a valer 7
    *Pb+=2;
}

int main(){
    int a=5,b=10;
    printf("\n Eu tenho %d e %d \n",a,b);
    maisDois(&a,&b);//1º) passo o endereço das minha variáveis por meio do "&"
    printf("\n Agora eu tenho %d e %d",a,b);//4º)

    return 0;
}
