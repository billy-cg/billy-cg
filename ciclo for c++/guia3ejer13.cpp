#include <iostream>
using namespace std;
/**
  Dada una lista de 10 n�meros enteros informar cual es el m�ximo de los pares.
Ejemplo A: 2, 10, 20, 8, 25, 13, 36, - 8, -5, 20 se informa m�ximo: 36
Ejemplo B 5, -13, 23, 81, -55, -13, 55, 4, 15 ,-20 Se informa m�ximo: 4
Ejemplo C: -5, -13, -20, -8, -55, -13, -55, -14, -15, -20 se informa m�ximo: -8


*/

int main(){
         int numero, maximoPar;

         for(int i = 1;i<=5;i++){
            cout << "numero" << i << ":";
            cin >> numero;


               if(numero%2==0&&(maximoPar==0||numero>maximoPar)){
                   maximoPar=numero;

               }





         }
                cout << "el maximo par es: "<< maximoPar << endl;





    return 0;
}
