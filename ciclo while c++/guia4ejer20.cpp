#include <iostream>
using namespace std;
/**
 Dada una lista de n�meros que fi naliza cuando se ingresa un cero, informar el primer n�mero par ingresado
  y su ubicaci�n en la lista y el �ltimo de los n�meros primos y su ubicaci�n en la lista.
Ejemplo A: 7, 4, 5, 6, 9, 13, 10 se informa Primer n�mero par: 4 ubicaci�n 2. �ltimo primo: 13 ubicaci�n 6.
Ejemplo B: 9, 5, 21, 9, 13, 15, 6 se informa Primer n�mero par: 6 ubicaci�n 7. �ltimo primo: 13 ubicaci�n 5.


*/

int main(){
       int numero, ubicacionPrimo, ubicacionPar=0, par;

        cout << "ingrese un nuemro:" ;
        cin >> numero;


       while(numero!=0){

          if(numero%2==0){
              par=numero;
              ubicacionPar++;



          }

            cout << "ingrese un numero:";
            cin >> numero;

       }
         cout << par << ubicacionPar << endl;
    return 0;
}
