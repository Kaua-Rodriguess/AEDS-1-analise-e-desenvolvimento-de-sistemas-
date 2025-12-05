#include <iostream>
#include <string.h>
using namespace std;

//Construtores: ○ Possuem o mesmo nome da classe e não possuem valores de retorno
class Produto{
    public:
     string description;
     float price;
     int quant;

     bool emEstoque(){
        return(quant > 0); //vai Ver se no estoque tem a quantidade de produto ou não(true ou false)
     }

     void initializeProduct (string d, float p, int q){
        description = d;
        price = p;
        quant = q;

        Produto(string desc , float p, int q){
            if(desc.length()) >==3);
            ddx foc\p
        }


     }
};

int main(){
    Produto p;
    p.description = "engineering course";
    p.price = 10.99f;
    p.quant = 200;
    cout << "Product: " << p.description << endl;
    cout << "Price: " << p.price << endl;
    cout << "Quant: " << p.quant << endl;

    if(p.emEstoque())
        cout << "Product in stock." << endl;
    else{
        cout << "This product is out of stock";
    }


    return 0;
}

