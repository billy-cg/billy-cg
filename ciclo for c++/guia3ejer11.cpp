#include <iostream>
using namespace std;
/**
Hacer un programa para ingresar una lista de 10 números, luego informar el máximo y el mínimo.
Ejemplo A: 10, 20, -5, 30,-15, 5, 42, 0, 22, -13. Se listará Máximo 42 Mínimo -15.
Ejemplo B: 10, 20, 5, 30, 15, 5, 42, 8, 22, 13. Se listará Máximo 42 Mínimo 5.
Ejemplo C: -10, -20, -5, -30, -15, -12, -42, -8, -22, -13. Se listará Máximo -5 Mínimo -42.
Observe que los tres ejemplos dejan en claro que la suposición de que el máximo “seguramente”
es un positivo y el mínimo “seguramente” es un negativo, queda totalmente descartada.


*/

int main(){
         int numero, maximo, minimo;
          maximo=numero;
          minimo=numero;
         for(int i=1;i<=10;i++){
            cout << "numero" << i << ":";
            cin >> numero;

            if(i == 1 ||numero > maximo){
                maximo=numero;

            } if(numero < minimo){
                 minimo=numero;
            }

         }
                  cout << "el maximo es: " << maximo << endl;
                  cout << "el minimo es: " << minimo << endl;
    return 0;
}
