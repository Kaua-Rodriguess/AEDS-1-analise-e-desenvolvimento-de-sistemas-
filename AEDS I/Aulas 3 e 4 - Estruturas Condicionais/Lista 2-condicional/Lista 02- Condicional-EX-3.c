 //!3. Ler um número inteiro, verificar e escrever se ele é divisível ou não por 7.

 /*!Um número é divisível por 7 se o dobro do seu último algarismo subtraído do
 número sem o último algarismo, resulta em um número divisível por 7*/

 #include <stdio.h>
int main()
{
int a;

printf("digite um numero:");
scanf("%d",&a);


if(a%7==0) //se(IF) o resto da divisão por 7 for igual a 0, EXECUTE OS COMANDOS ABAIXO
{
    printf("%d e divisivel por 7!",a);
}
else
{
    printf("%d nao e divisivel por 7!",a);
}

return 0;
}
