#include <iostream>
#include <string.h>
using namespace std;

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
     }
};

int main(){
    Produto p;
    p.description = "engineering course";
    p.price = 10.99f;
    p.quant = 200;
    cout << "Product: " << p.description << "\n";
    cout << "Price: " << p.price << "\n";
    cout << "Quant: " << p.quant << "\n";

    if(p.emEstoque())
        cout << "Product in stock." << "\n";
    else{
        cout << "This product is out of stock";
    }


    return 0;
}