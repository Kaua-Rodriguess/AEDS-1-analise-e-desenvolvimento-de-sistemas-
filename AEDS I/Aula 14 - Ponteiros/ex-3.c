#include <stdio.h>

void swap(int*Pn1,int*Pn2){
    *Pn1=*Pn2;
    *Pn2=*Pn1;
}

int main(){
    int n1=5,n2=7;
    printf("n1=%d n2=%d\n",n1,n2);

    swap(&n1,&n2);

    printf("n1=%d n2=%d\n",n1,n2);

    return 0;
}
