#include <stdio.h>

int main() {
    float salario_minimo, kw_gasto, valor_por_kw, valor_total, valor_com_desconto;

    // Passo 1: Ler o valor do salário mínimo
    printf("Digite o valor do salário mínimo: R$ ");
    scanf("%f", &salario_minimo);

    // Passo 2: Ler a quantidade de kWh consumida
    printf("Digite a quantidade de kilowatt (kW) gasta: ");
    scanf("%f", &kw_gasto);

    // Passo 3: Calcular o valor de cada kW (1/7 do salário mínimo dividido por 100)
    valor_por_kw = (salario_minimo / 7) / 100;

    // Passo 4: Calcular o valor total a ser pago
    valor_total = kw_gasto * valor_por_kw;

    // Passo 5: Calcular o valor com 10% de desconto
    valor_com_desconto = valor_total * 0.9;

    // Passo 6: Mostrar os resultados
    printf("\nValor por kilowatt: R$ %.2f\n", valor_por_kw);
    printf("Valor a ser pago: R$ %.2f\n", valor_total);
    printf("Valor com desconto de 10%%: R$ %.2f\n", valor_com_desconto);

    return 0;
}
