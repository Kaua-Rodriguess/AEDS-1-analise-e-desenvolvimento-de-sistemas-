#include <stdio.h>

int main(){
    int n,i=1;

    printf("Digite um numero:");
    scanf("%i",&n);

    while(i<=10){
        printf("\n %d x %d = %d",n,i,n*i);
        i++;
    }

    return 0;
}