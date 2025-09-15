/*!
14. Faça um programa que leia o preço de um produto e aplique um desconto de 10%
caso o valor seja superior a R$ 100.
*/
#include <stdio.h>

int main(){
    float preco,desconto;

    printf("Digite o valor do produto adiquirido para saber se voce possui direito a desconto:");
    scanf("%f",&preco);

    if(preco>100){
        desconto=preco*0.9;
        printf("\n Como voce fez uma compra acima de R$100,recebeu uma desconto de 20porcento: R$%.2f",desconto);
    }
    else{
        printf("\n Voce nao tem desconto sobre a compra efetuada!");
    }

    return 0;
}
