#include <iostream>
using namespace std;
/**
 Hacer un programa para ingresar por teclado las cuatro notas de los ex�menes
 obtenidas por un alumno y luego emitir uno solo de los cartel de acuerdo a las siguientes condiciones:
- �Promociona�, s� obtuvo en los cuatro ex�menes nota 7 o m�s.
- �Rinde examen fi nal�, si obtuvo nota 4 o m�s en por lo menos tres ex�menes.
- �Recupera Parciales�, si obtuvo nota 4 o m�s en por lo menos uno de los ex�menes.
- �Recursa la materia�, si no aprob� ning�n examen parcial.


*/

int main(){

         int nota1, nota2, nota3, nota4;
          cout << "ingrese sus notas: " <<endl;
          cin >> nota1 >> nota2 >> nota3 >> nota4 ;

          if (nota1>=7&&nota2>=7&&nota3>=7&&nota4>=7){
            cout << "promociona " << endl;
          }else if((nota1>=4||nota2>=4)&&(nota3>=4&&nota4>=4)){
            cout << "rinde examen final" << endl;
          }else if((nota1>=4)||(nota2>=4)||(nota3>=4)||(nota4>=4)){
            cout << "recupera parciales" << endl;
          } else {
             cout << "recuoera la materia" << endl;
          }

    return 0;
}
