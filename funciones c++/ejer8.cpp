#include <iostream>
using namespace std;
/**



*/
 int yearBisieto(int num){

   if((num%4==0&&num%100!=0)||(num%400==0)){
    return true;

   }else {
     return false;
   }



 }
int main(){
       int numero;

       cout << "ingrese un anio:";
       cin >> numero;

       if(yearBisieto( numero)){

            cout << "es biciento" << endl;
       }else {

            cout << "no es bisiesto" << endl;

       }







    return 0;
}
