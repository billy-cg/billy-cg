#include <iostream>
using namespace std;
/**
  Hacer un programa para ingresar por teclado la cantidad de horas trabajadas por un operario
  y el valor que se le paga por hora trabajada y listar por pantalla el sueldo que le corresponda.

*/


int main(){
    int horas, precioHora, sueldo;

    cout << "ingrese horas trabajadas:" ;
    cin >> horas;
    cout << "ingrese precio por hora:" ;
    cin >> precioHora;

    sueldo=horas*precioHora;


    cout << "su sueldo es:" << sueldo << endl;

    return 0;
}
