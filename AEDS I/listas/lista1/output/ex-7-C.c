/*
(c) Ler um valor de hora (e minuto), calcular e mostrar quantos minutos se passaram
 desde o início do dia.
*/

int main(){
    int hora;
    int min;

    printf("Digite a hora:");
    scanf("%d",&hora);

    printf("Digite os minutos:");
    scanf("%d",&min);

    int minHora= hora*60;
    int somaMin= minHora+min;

    /*1 dia = 24hrs =  1440min*/

    int totalMin= 1440-somaMin

    printf("resultado: %i",total);



    return 0;
}