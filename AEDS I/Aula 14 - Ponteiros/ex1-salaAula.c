#include <stdio.h>
void maisDois(int *Pa,int *Pb){
    *Pa+=2;
    *Pb+=2;
}

int main(){
    int a=5,b=10;
    printf("\n Eu tenho %d e %d \n",a,b);
    maisDois(&a,&b);
    printf("\n Agora eu tenho %d e %d",a,b);

    return 0;
}
