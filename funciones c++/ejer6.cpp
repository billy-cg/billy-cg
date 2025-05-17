#include <iostream>

using namespace std;
/**
 Hacer una función que reciba un número entero por valor llamado día y un
 string llamado nombre por referencia y le asigne el nombre correspondiente
 según el número de día. Siendo 0 → Domingo y 6 → Sábado.



*/

  void mostrarDia(int dia, string& nombre){
     switch (dia){
 case 0:
    nombre = "domingo";
    break;
 case 1:
    nombre = "lunes";
    break;
 case 2:
    nombre = "martes";
    break;
 case 3:
    nombre = "miercoles";
    break;
 case 4:
    nombre = "jueves";
    break;
 case 5:
    nombre = "viernes";
    break;
 case 6:
    nombre = "sabado";
    break;

 default:
    nombre = "dia no valido";
    break;


     }


  }




int main(){
       int numeroDia;
       string nombreDia;

       cout << "ingrese el numero de dia (donde 0 es domingo):";
       cin >> numeroDia;

       mostrarDia(numeroDia, nombreDia);

       cout << "el nombre del dia es:" << nombreDia << endl;


    return 0;
}
