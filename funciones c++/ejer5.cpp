#include <iostream>
using namespace std;
/**
 Hacer una función llamada Redondear que reciba como parámetro un número
 float y devuelva un número entero con el redondeo del mismo.
 Por ejemplo:
 Si recibe 7.78, debe devolver 8.
 Si recibe 7.48, debe devolver 7.
 Si recibe 7.5, debe devolver 8.
 Hacer un programa para ingresar un número y, utilizando Redondear,
 emita luego un cartel indicando el número redondeado.



*/
 redondeo(float n){

  n=int(n);
    return n;

 }
int main(){
       float numero;

       cout << "ingrese un numero:";
       cin >> numero;

       cout << "el numero fue redondeado:" << redondeo(numero) << endl;

    return 0;
}
