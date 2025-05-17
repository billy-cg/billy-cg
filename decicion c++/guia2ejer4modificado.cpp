#include <iostream>
using namespace std;


int main(){
      int N1, N2, diferencia;

      cout << "ingrese el primer numero: ";
      cin >> N1;

      cout << "ingrese el segundo numero :";
      cin >> N2;

          if(N1 > N2){
            diferencia = N1 - N2;
          }  else {
              diferencia =  N2 - N1;
          }
              cout << "la diferencia es: " << diferencia << endl ;


    return 0;
}
