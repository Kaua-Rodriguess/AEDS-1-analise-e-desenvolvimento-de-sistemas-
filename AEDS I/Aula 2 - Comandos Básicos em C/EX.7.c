#include <stdio.h>
int main(){
float a, b, c;

printf("insira o valor de a,b,c:\n");
scanf("%f,%f,%f", &a,&b,&c);/*valores de a,b e c*/
float y=a+(b/c+a)+2*(a-b)+6;
printf("o resultado e: %.2f", y);
return 0;
}
