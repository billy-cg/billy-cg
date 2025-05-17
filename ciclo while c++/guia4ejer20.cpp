#include <iostream>
using namespace std;
/**
 Dada una lista de números que fi naliza cuando se ingresa un cero, informar el primer número par ingresado
  y su ubicación en la lista y el último de los números primos y su ubicación en la lista.
Ejemplo A: 7, 4, 5, 6, 9, 13, 10 se informa Primer número par: 4 ubicación 2. Último primo: 13 ubicación 6.
Ejemplo B: 9, 5, 21, 9, 13, 15, 6 se informa Primer número par: 6 ubicación 7. Último primo: 13 ubicación 5.


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
