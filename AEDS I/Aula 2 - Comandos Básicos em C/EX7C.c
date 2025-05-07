// Ler um valor de hora (e minuto), calcular e mostrar quantos minutos se passaram desde o início do dia.
#include <stdio.h>
int main(){

    int hora_a;/*hora atual*/
    printf("que horas sao:");
    scanf("%i",&hora_a);/*hora atual inserida,lida 14:57*/

    int min_a;
    printf("quantos minutos:");
    scanf("%i",&min_a);

    int min=hora_a*60 + min_a;/*convertendo horas para min*/
    printf("minutos que passaram-se desde o inicio do dia:%i",min);

return 0;
}
