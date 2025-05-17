#include <iostream>
using namespace std;
/**
 Hacer una función llamada CalcularMaximo que determine el máximo entre dos números.
 La función debe recibir dos números enteros por valor y devolver el valor más grande.
 Si los números son iguales debe devolver cualquiera de los dos. La función no debe mostrar nada por pantalla.
 Hacer un programa para ingresar dos números y, utilizando CalcularMaximo, emita luego el número mayor de ambos.


*/
    int calcularMaximo(int a, int b){

     if(a>b){
        return a;
     } else {
        return b;
     }

    }


int main(){
      int n1 , n2 ;

      cout << "ingre dos numero:";
      cin >> n1;
      cin >> n2;

      int maximo = calcularMaximo(n1, n2);

      cout << "el numero mayor es:" << maximo << endl;


    return 0;
}
