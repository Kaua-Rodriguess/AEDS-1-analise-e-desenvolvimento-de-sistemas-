#include <stdio.h>

int x=3;

void metodo1(){
    x++;//4+1=5
}

void metodo2(int x){
    x++;//5+1=6
}


int main()
{
 printf("x:%i",x);//3
 x++;//3+1

 printf("x:%i",x);//4

 metodo1();

 printf("x:%i",x);//5

 metodo2(x);

 printf("x:%i",x);//6
 




return 0;
}
