/*!ENTRADA: 3 notas
SAÍDA: some a média de 3 notas
*/
int main(){
    //!declarando o nome e o tipo de variável que eu irei utilizar
    float n1,n2,n3,soma,media;

    //!PRINTF=comando de SAÍDA, vai ser a menssagem que SÁI na minha tela
    printf("Escreva a nota1:\n");

    /*!SCANF=comando de ENTRADA,ver o dado que o usuário vai ENTRAR e
    o meu computar vai guardar dentro de alguma variável*/
    scanf("%f",&n1);

    printf("Escreva a nota2:\n");
    scanf("%f",&n2);

    printf("Escreva a nota3:\n");
    scanf("%f",&n3);

    /*!1º- como eu já declarei o tipo dessa variével no início do meu código
    não preciso declarar de novo, somente escreve-lá

    2º- O QUE EU FIZ AQUI? vocês vira, que sempre que criamos uma variável podemos
    atribuir valor a elas, um exemplo, a=1, aqui não é diferente, atribuimos o valor da
    variavel "SOMA" o valor da soma das 3 notas
    */
    soma=n1+n2+n3;

    /*! Com isso, eu não preciso repetir "n1+n2+n3" para calcular a média
    somente fazer igual eu fiz abaixo*/
    media=soma/3;

    /*! agora */
    printf(" A soma das tres notas e: %.2f \n A media é: %.2f \n",soma,media);



    return 0;
}
