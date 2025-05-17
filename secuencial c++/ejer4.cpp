#include <iostream>
using namespace std;
/**
  Hacer un programa para ingresar por teclado la cantidad de asientos totales en un avión y la cantidad de
  pasajes ocupados y luego calcular e informar el porcentaje de ocupación y el porcentaje de no ocupación del mismo.


*/

int main(){
      int asientosTotale, porvacios, porocupados, pasejesVendidos;

      cout << "ingrese asientos totales:";
      cin >> asientosTotale;
      cout << "pasajes vendidos:";
      cin >> pasejesVendidos;
      porocupados=(pasejesVendidos*100)/asientosTotale;
      porvacios= 100-porocupados;

      cout << "porcentaje de asientos ocupados:" << porocupados << "%" << endl;
      cout << "porcentaje de asientos vacios:" << porvacios << "%" << endl;

    return 0;
}
