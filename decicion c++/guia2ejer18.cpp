#include <iostream>
using namespace std;
/**
  Una empresa de electricidad cobra el servicio a sus clientes de acuerdo a la siguiente escala:
$10 por kilovatio (kW) por el consumo hasta los primeros 100 kW de consumo.
$12 por kW por el consumo excedente de 101 a 200 kW.
$15 por kW por el consumo excedente de 201 kW en adelante.
Hacer un programa para que, dado el consumo en kilovatios de un determinado cliente,
el programa calcule e informe el total a pagar.
Ejemplo 1: Un consumo de 55 kW, se calculará: $ 10 x 55= $ 550
Ejemplo 2: Un consumo de 125 kW, se calculará: $10 x 100 + $12 x 25 = $1300
*/

int main(){

       int kv,precio,kvextra,kvex2;

       cout << "ingrese kv consumidos: " ;
       cin >> kv;

       if(kv<100){
           precio=kv*10;

       }else if(kv>100&&kv<=200){
             kvextra=kv-100;
             precio=(100*10)+(kvextra*12);
       }else if(kv>200){
             kvextra=kv-100;
             kvex2=kvextra-100;
             precio=(100*10)+(100*12)+(kvex2*15);
       }

            cout << "el total a pagar es:"<< "$" << precio << endl;
    return 0;
}
