#include <iostream>
using namespace std;
/**
 Hacer una funci�n llamada CalcularMaximo que determine el m�ximo entre dos n�meros.
 La funci�n debe recibir dos n�meros enteros por valor y devolver el valor m�s grande.
 Si los n�meros son iguales debe devolver cualquiera de los dos. La funci�n no debe mostrar nada por pantalla.
 Hacer un programa para ingresar dos n�meros y, utilizando CalcularMaximo, emita luego el n�mero mayor de ambos.


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
