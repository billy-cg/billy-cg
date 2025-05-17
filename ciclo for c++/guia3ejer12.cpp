#include <iostream>
using namespace std;
/**
   Hacer un programa para ingresar una lista de 10 números e
   informar el máximo de los negativos y el mínimo de los positivos.
   Ejemplo: 5, 8, 12, 2, -10, 15, -20, 8, -3, 24. Máximo Negativo -3. Mínimo Positivo 2.


*/

int main(){
         int numero, maximo, minimo;
          maximo=numero;
          minimo=numero;

         for(int i=1;i<=10;i++){
            cout << "numero" << i << ":";
            cin >> numero;

            if(numero<0&&(maximo>=0||numero>maximo)){
                maximo=numero;

            } if(numero>0&&(minimo<=numero||numero<minimo)){
                 minimo=numero;
            }

         }
                  cout << "el maximo de los negativos es: " << maximo << endl;
                  cout << "el minimo de los positivos es: " << minimo << endl;

    return 0;
}
