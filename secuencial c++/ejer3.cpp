#include <iostream>
using namespace std;
/**
 Una concesionaria de autos paga a los vendedores un sueldo fi jo de $5000 más $700
 de premio por cada auto vendido. Hacer un programa que permita ingresar por teclado la
 cantidad de autos vendidos por un vendedor y luego informar por pantalla el sueldo total a pagar.
 Ejemplo. Si la cantidad de autos vendidos fuera 4 entonces el sueldo total a pagar es de $7800.


*/

int main(){
     int autosVendidos, sueldo;

     cout << "ingrese cantidad de autos vendidos:";
     cin >> autosVendidos;

     sueldo= (autosVendidos*700)+5000;

     cout << "su sueldo es:" << sueldo << endl;

    return 0;
}
