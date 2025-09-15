#include <stdio.h>

int main() {
    int n, i;
    int a = 0, b = 1, proximo;

    printf("Digite quantos termos da sequência de Fibonacci deseja mostrar: ");
    scanf("%d", &n);

    printf("Sequência de Fibonacci: ");

    for(i = 0; i < n; i++) {
        if(i <= 1) {
            proximo = i;
        } else {
            proximo = a + b;
            a = b;
            b = proximo;
        }
        printf("%d ", proximo);
    }

    return 0;
}
