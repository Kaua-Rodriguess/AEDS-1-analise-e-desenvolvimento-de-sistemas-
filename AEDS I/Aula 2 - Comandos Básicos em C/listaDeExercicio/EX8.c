/*8. Sabendo que 100 kilowatt de energia custa um s�timo do sal�rio m�nimo, fa�a um algoritmo que leia o valor do sal�rio m�nimo e a quantidade de kilowatt gasta por uma
 resid�ncia, calcule e mostre: o valor em reais de cada kilowatt; o valor em reais a ser
 pago; e o novo valor a ser pago por essa resid�ncia com um desconto de 10%*/
 #include<stdio.h>

 int main(){
     float salario;//sal�rio minimo
     float kw_gasto;

     // Entrada de dados
     printf("informe o seu salario:r$");
     scanf("%f",&salario);

     printf("informe a quantidade de kilowatt gasto:");
     scanf("%f",&kw_gasto);

    float v_cada_kw=salario/7/100;// C�lculo do valor de cada kilowatt
    float v_pago=v_cada_kw*kw_gasto;// C�lculo do valor total a ser pago
    float v_desconto=v_pago*(0.9);//// C�lculo do valor com 10% de desconto

      // Exibi��o dos resultados formatados
    printf("\ncada kilowatt custa:r$%.2f\n",v_cada_kw);
    printf("o valor a ser pago e:r$%.2f\n",v_pago);
    printf("novo valor com desconto:r$%.2f\n",v_desconto);

 return 0;
 }
