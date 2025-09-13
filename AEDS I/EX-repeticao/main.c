#include <stdio.h>
int main(){

    printf("impares:");
    for(int i=1;i<=50;i++){
        if(i%2 != 0){
            printf("%d-",i);
        }
    }
    printf("\n");
    printf("\n pares:");

    for(int j=1;j<=50;j++){
        if(j%2 == 0){
            printf("%d-",j);
        }
    }
    return 0;
}
