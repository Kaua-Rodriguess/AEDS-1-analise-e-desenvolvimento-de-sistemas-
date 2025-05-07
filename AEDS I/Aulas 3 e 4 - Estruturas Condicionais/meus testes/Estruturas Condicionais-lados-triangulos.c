/*!Estrutura if-else if
� Ap�s avaliar uma condi��o e ela ser
falsa, esse estado permanece ao testar
as pr�ximas condi��es.*/

//!TRIANGULOS:
//!EQUIL�TERO: 3 lados iguais
//!IS�SCELES: 2 lados iguais
//!ESCALENO:  3 lados diferentes

/*!=diferente ||=ou*/

if(lado1 == lado2 || lado1 == lado3)
{
    tipo=1 // equilatero
}
else if(lado1!=lado2 && lado1!= lado3 && lado2 != lado3)
{
    tipo=2; //escaleno
}
else
{
    tipo=3; //isosceles
}
