#include <iostream>
using namespace std;
/*
  Basado en los 2 ejercicios anteriores, hacer un programa
  para ingresar por teclado la longitud de los tres lados de un
  triángulo y luego listar qué tipo de triángulo es:
- Equilátero: si los tres lados son iguales.
- Isósceles: si dos de los tres lados son iguales.
- Escaleno: si los tres lados son distintos entre sí.



*/

int main(){
       int lado1, lado2, lado3;

       cout << "ingrese lado1: " << endl;
       cin >> lado1 ;
       cout << "ingrese lado2: " << endl;
       cin >> lado2 ;
       cout << "ingrese lado3: " << endl;
       cin >> lado3 ;



       if (lado1==lado2&&lado2==lado3){
           cout << "triangulo equilatero"<<endl;

       }else if (lado1==lado2||lado2==lado3||lado1==lado3){
           cout << "triangulo isoceles "<<endl;

       } else {
          cout << "eltriangulo es escaleno"<<endl;
       }


    return 0;

}
