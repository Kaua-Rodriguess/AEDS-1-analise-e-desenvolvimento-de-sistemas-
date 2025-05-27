#include <stdio.h>

int main(){
    int i;
    float r;

    scanf("%i %f",&i,&r);

    while(i>10 && r>10){
        printf("%i\n",i);
        i-=2;
        printf("%i %1.f\n",i,r);
        r+=1;
    }

return 0;
}
