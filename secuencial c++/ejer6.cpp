#include <iostream>
using namespace std;
/**
  Hacer un programa para que un comercio ingrese por teclado la recaudación en pesos para cada
  una de las cuatro semanas del mes. El programa debe listar la recaudación promedio por semana
  y el porcentaje de recaudación por semana.
  Ejemplo. Si se ingresa $1600, $1200, $4800 y $400 se listará como recaudación promedio $2000
  y como porcentajes por semana: 20%, 15%, 60% y 5%.


*/

int main(){
   int semana1, semana2, semana3, semana4, suma;
   float promedioRecaudacion, promediPorcentaje;

   cout << "ingrese recaudacion semana 1:$";
   cin >> semana1;
   cout << "ingrese recaudacion semana 2:$";
   cin >> semana2;
   cout << "ingrese recaudacion semana 3:$";
   cin >> semana3;
   cout << "ingrese recaudacion semana 4:$";
   cin >> semana4;
   suma=semana1+semana2+semana3+semana4;
   promedioRecaudacion=suma/4;
   cout << "recaudacion promedio:$" << promedioRecaudacion << endl;
   cout << "porcenntaje por semana:" << (semana1*100)/suma << "%" << endl;
   cout << "porcenntaje por semana:" << (semana2*100)/suma << "%" << endl;
   cout << "porcenntaje por semana:" << (semana3*100)/suma << "%" << endl;
   cout << "porcenntaje por semana:" << (semana4*100)/suma << "%" << endl;

    return 0;
}
