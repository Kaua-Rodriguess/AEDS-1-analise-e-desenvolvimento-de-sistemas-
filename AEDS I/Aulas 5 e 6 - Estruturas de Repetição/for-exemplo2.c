#include <stdio.h>
int main()
{
/*!
for-para(1ºINÍCIO,2ºEXPRESSÃO,3ºINCREMENTO){ lista de comandos }

-"ler"-o computador lÊ(scanf)
-"escrever"- o computador ESCREVE(printf)
*/

/*!Como imprimir os 3 primeiros números a partir do 1?*/

/*for(int i=1; i<=3; i++){

    printf("numero:%i\n",i);
}*/

for(int i=0; i<10; i+=2){
    printf("numero:%i\n",i);
}



return 0;
}
