#include <iostream>
#include <math.h>
using namespace std;
/**
Escribir una función llamada calcularPotencia para que, dados dos números enteros,
calcule y devuelva la potencia del primero a la del segundo. Tener en cuenta las siguientes posibilidades:
calcularPotencia(2, 3) → 8
calcularPotencia(2, 0) → 1
calcularPotencia(2, -3) → 0,125
*/

 void calcularPotencia(){
     int base, exponente;
     float potencia;
     cout << "ingrese la base seguido del exponente:";
     cin >> base;
     cin >> exponente;
     potencia = pow(base, exponente);

     cout << "la potencia de " << base << " " << "es: " << potencia << endl;


 }

int main(){
       calcularPotencia();

    return 0;
}
