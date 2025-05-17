#include <iostream>
using namespace std;
/**
  Hacer un programa para ingresar una lista de 10 números,
  luego informar cuántos son positivos, cuántos son negativos, y cuántos iguales a cero.
  Para resolver este ejercicio sugerimos resolver antes el TP2 EJ 11.


*/

int main(){
        int N, numero, positivos = 0, negativos = 0, ceros = 0;

        cout << "ingrese un numero: ";
        cin >> N ;

        for(int i=0;i<N;i++){
            cout << "numero_" <<i+1<< ":";
            cin >> numero;
          if(numero > 0){
            positivos++;
        } if (numero < 0){
            negativos++;
        } if (numero == 0){
            ceros++;
        }


  }
            cout << "cantidad de positivos : " << positivos <<endl;
            cout << "cantidad de negativos : " << negativos <<endl;
            cout << "cantidad de ceros : " << ceros << endl;





    return 0;
}
