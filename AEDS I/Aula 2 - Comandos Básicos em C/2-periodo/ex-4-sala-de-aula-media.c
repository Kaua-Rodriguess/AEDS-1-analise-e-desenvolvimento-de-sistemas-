/*!ENTRADA: 3 notas
SA�DA: some a m�dia de 3 notas
*/
int main(){
    //!declarando o nome e o tipo de vari�vel que eu irei utilizar
    float n1,n2,n3,soma,media;

    //!PRINTF=comando de SA�DA, vai ser a menssagem que S�I na minha tela
    printf("Escreva a nota1:\n");

    /*!SCANF=comando de ENTRADA,ver o dado que o usu�rio vai ENTRAR e
    o meu computar vai guardar dentro de alguma vari�vel*/
    scanf("%f",&n1);

    printf("Escreva a nota2:\n");
    scanf("%f",&n2);

    printf("Escreva a nota3:\n");
    scanf("%f",&n3);

    /*!1�- como eu j� declarei o tipo dessa vari�vel no in�cio do meu c�digo
    n�o preciso declarar de novo, somente escreve-l�

    2�- O QUE EU FIZ AQUI? voc�s vira, que sempre que criamos uma vari�vel podemos
    atribuir valor a elas, um exemplo, a=1, aqui n�o � diferente, atribuimos o valor da
    variavel "SOMA" o valor da soma das 3 notas
    */
    soma=n1+n2+n3;

    /*! Com isso, eu n�o preciso repetir "n1+n2+n3" para calcular a m�dia
    somente fazer igual eu fiz abaixo*/
    media=soma/3;

    /*! agora */
    printf(" A soma das tres notas e: %.2f \n A media �: %.2f \n",soma,media);



    return 0;
}
