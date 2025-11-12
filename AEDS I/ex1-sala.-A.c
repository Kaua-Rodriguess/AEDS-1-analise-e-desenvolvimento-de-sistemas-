int soma(int num){
    int soma=0;
    while(num>0){
        int dig = num % 10;
        soma += dig;
        num/10;
    }
}