/*8. Sabendo que 100 kilowatt de energia custa um sétimo do salário mínimo, faça um algoritmo que leia o valor do salário mínimo e a quantidade de kilowatt gasta por uma
 residência, calcule e mostre: o valor em reais de cada kilowatt; o valor em reais a ser
 pago; e o novo valor a ser pago por essa residência com um desconto de 10%*/
 #include<stdio.h>

 int main(){
     float salario;//salário minimo
     float kw_gasto;

     // Entrada de dados
     printf("informe o seu salario:r$");
     scanf("%f",&salario);

     printf("informe a quantidade de kilowatt gasto:");
     scanf("%f",&kw_gasto);

    float v_cada_kw=salario/7/100;// Cálculo do valor de cada kilowatt
    float v_pago=v_cada_kw*kw_gasto;// Cálculo do valor total a ser pago
    float v_desconto=v_pago*(0.9);//// Cálculo do valor com 10% de desconto

      // Exibição dos resultados formatados
    printf("\ncada kilowatt custa:r$%.2f\n",v_cada_kw);
    printf("o valor a ser pago e:r$%.2f\n",v_pago);
    printf("novo valor com desconto:r$%.2f\n",v_desconto);

 return 0;
 }
