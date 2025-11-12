/*
numero n, retorne a soma do seus digitos:
123 = 1+2+3=6
*/

int soma(int n){
        if(n==0){
            return 0;
        }
    else{
         return (n%10) + soma(n/10);
    }
}

int main() {
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    
    printf("A soma dos digitos de %d e: %d\n", num, soma(num));
    return 0;
}
 