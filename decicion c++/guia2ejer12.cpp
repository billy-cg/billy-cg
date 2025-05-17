#include <iostream>
using namespace std;
/*
 12
Hacer un programa para ingresar tres números diferentes y determinar e informar el número del medio.
Sugerimos probar CADA UNA de las siguientes 6 combinaciones.
N1=8, N2=6, N3=10. Valor del medio: 8. N1=8, N2=10, N3=6. Valor del medio: 8
N1=6, N2=8, N3=10. Valor del medio: 8. N1=10, N2=8, N3=6. Valor del medio: 8
N1=6, N2=10, N3=8. Valor del medio: 8. N1=10, N2=6, N3=8. Valor del medio: 8


*/

int main(){
         int n1, n2, n3;

         cout << "ingrese 3 numeros: " <<endl;
         cin >> n1 >> n2 >> n3;

         if(n1>n2 && n1<n3){
            cout << "el numero del medioes: " << n1 <<endl;
         }else if(n2>n1&&n2<n3){
            cout << "el numero del medio es: "<< n2 <<endl;
         }else if (n3>n1&&n3<n2){
            cout << "el numero del medio es: "<< n3 <<endl;
         }else if(n1>n3&&n1<n2){
            cout << "el numero del medio es: "<< n1 <<endl;
         }else if(n2>n3&&n2<n1){
            cout << "el numero del medio es: "<< n2 <<endl;
         }else{
            cout << "el numero del medio es: "<< n3 <<endl;
         }


    return 0;
}
