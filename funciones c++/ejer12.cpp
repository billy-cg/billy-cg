#include <iostream>
using namespace std;
/**
 Escribir una funci�n de nombre validarFecha que reciba 3 valores correspondientes al d�a, mes y a�o,
 y devuelva 1 si los valores recibidos corresponden a una fecha correcta o 0 si no es correcta.
 Por ejemplo, si la funci�n recibe 30, 2, 2000 deber� devolver 0; y si recibe 12, 2, 1990, deber� devolver 1.
*/

 validarFecha(int dia, int mes, int anio){
      if(anio<1||mes<1||mes>12||dia<1)
        return 0;

      int diasPormes[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

      bool esBisiesto = (anio % 4 ==0 && (anio % 100 != 0 || anio % 400 == 0));
      if(esbisiesto && mes == 2)
        diaspormes [1] = 29;

      if (dia > diasPormes [mes - 1])
        return 0;

      return 1;


 }

int main(){
      cout << validarFecha(30, 2, 2000) << endl;

    return 0;
}
