//FUNÇÕES
#include <stdio.h>
#include <stdlib.h>

typedef struct Venda {
    int pecas;
    int preco;   
} venda; 

venda TotalVendas(venda c,venda d){
    venda t;
    t.pecas = c.pecas + d.pecas;
    t.preco = c.preco + d.pecas;
    return t;
}

int main()
{   
return 0;
}
