#include <iostream>
using namespace std;
/**
 Hacer un programa que permita ingresar el legajo y sueldo de 10 empleados y determine:
- El legajo del empleado con mayor sueldo


*/

int main(){
       int legajo, sueldo, sueldoMayor=0, legajoMayor=0;


       for(int i=1;i<=3;i++){

          cout << "legajo#:";
          cin >> legajo;
           cout << "sueldo:" ;
           cin >> sueldo;




        if(i==1||sueldo>sueldoMayor){
           sueldoMayor=sueldo;
           legajoMayor=legajo;
        }

       }
         cout << "legajo con sueldo mayor:" << legajoMayor << endl;
    return 0;
}
