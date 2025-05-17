#include <iostream>
using namespace std;
/**
 Un comercio vende tres marcas de alfajores distintas A, B y C. Hacer un programa para ingresar
 por teclado la cantidad de alfajores vendidos de cada una de las tres marcas y
 luego se informe el porcentaje de ventas para cada una de ellas.
 Ejemplo. Si se ingresa 100, 25 y 75 como cantidades vendidas entonces el
 programa calculará e informará A: 50%, B: 12,50% y C: 37,50%.


*/

int main(){
     int A, B, C, suma;
     float porA, porB, porC;

     cout << "ingrese alfajores vendidos A:";
     cin >> A;
     cout << "ingrese alfajores vendidos B:";
     cin >> B;
     cout << "ingrese alfajores vendidos C:";
     cin >> C;

     suma= A+B+C;
     porA= ( A*100)/suma;
     porB= ( B*100)/suma;
     porC= ( C*100)/suma;

     cout << "porcentaje de alfajores vendidos de A:" << porA << "%" << endl;
     cout << "porcentaje de alfajores vendidos de B:" << porB << "%" << endl;
     cout << "porcentaje de alfajores vendidos de C:" << porC << "%" << endl;
     return 0;
}
