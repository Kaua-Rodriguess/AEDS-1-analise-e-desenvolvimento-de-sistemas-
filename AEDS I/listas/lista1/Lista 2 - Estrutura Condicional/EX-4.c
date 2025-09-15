
#include <stdio.h>

int main(){
    int n;
    int zero=0;
    printf("Digite um numero:");
    scanf("%d",&n);

    if(n>zero){
        printf("%d e positivo!",n);
    }
    else if(n<zero){
        printf("%d e negativo!",n);
    }
    else{
        printf("%d nulo!",n);
    }

return 0;
}
