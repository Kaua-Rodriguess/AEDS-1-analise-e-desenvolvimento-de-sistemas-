#include <stdio.h>

void swap(int*Pn1,int*Pn2){
    int temp=*Pn1;
    *Pn1=*Pn2;
    *Pn2=temp;
}

int main(){
    int n1=5,n2=7;
    printf("Numero1=%d Numero2=%d\n",n1,n2);

    swap(&n1,&n2);

    printf("Numero1=%d Numero2=%d\n",n1,n2);

    return 0;
}
