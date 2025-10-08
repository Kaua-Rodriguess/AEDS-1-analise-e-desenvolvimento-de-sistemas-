/* Faça um algoritmo que imprima os elementos da DIAGONAL principal de uma matriz 5 X 5 */
// diagonal, quando os índices são iguais i=0 j=0 i=1 j=1

void diagonal(int m[][5]){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(i==j){
                printf("\n");
                printf("%d->",m[i][j]);
            }
        }
    }
}

int main(){
    int m[5][5];

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            printf("Digite o valor para M[%d][%d]",i,j);
            scanf("%d",& m[i][j]);
        }
    }

    diagonal(m);

    return 0;
}
