#include <iostream>
using namespace std;
/**
   Hacer un programa para ingresar por teclado el importe de una venta y el porcentaje de descuento aplicada a
   la misma y luego informar por pantalla el importe a pagar.
   Ejemplo A. Si el importe de la venta es $1200 y el descuento es el 15% entonces el total a pagar será de $1020.
   Ejemplo B. Si el importe de la venta es $800 y el descuento es el 0% entonces el total a pagar será de $800.


*/

int main()
{
    float importe, descuento;
    float imporParcial, importeTotal;
    cout << "ingrese importe:$";
    cin >> importe;
    cout << "ingrese descuento:" <<  "%";
    cin >> descuento;
    imporParcial=(descuento*importe)/100;
    importeTotal=importe-imporParcial;
    cout << "total a pagar es:$" << importeTotal << endl;



    return 0;
}
