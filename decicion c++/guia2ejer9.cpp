#include <iostream>
using namespace std;
/*
 Hacer un programa para ingresar tres números y listar el máximo de ellos.


*/

int main(){
      int  N1, N2, N3, maximo;

      cout << "ingrese tres numeros : "<<endl;
      cin >> N1 >> N2 >> N3 ;

      if (N1>N2 && N1>N3){

          maximo = N1;
      }else if (N2>N1 && N2>N3){
          maximo = N2;
      }else {
         maximo = N3;
      }

       cout << "el maximo de los tres numeros es: " << maximo << endl;
    return 0;
}
