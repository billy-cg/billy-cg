#include <iostream>
#include <string>

using namespace std;

string decimalABinario(double decimal) {
    if (decimal == 0) {
        return "0";
    }

    string binario = "";
    int parteEntera = static_cast<int>(decimal);
    double parteDecimal = decimal - parteEntera;
    string parteEnteraBinaria = "";

    // Convertir la parte entera a binario
    while (parteEntera > 0) {
        parteEnteraBinaria = (parteEntera % 2 == 0 ? "0" : "1") + parteEnteraBinaria;
        parteEntera /= 2;
    }

    binario += (parteEnteraBinaria.empty() ? "0" : parteEnteraBinaria);

    // Convertir la parte decimal a binario (hasta cierta precision)
    if (parteDecimal > 0) {
        binario += ".";
        for (int i = 0; i < 8; ++i) { // Limitamos a 8 bits decimales
            parteDecimal *= 2;
            binario += (static_cast<int>(parteDecimal) == 0 ? "0" : "1");
            parteDecimal -= static_cast<int>(parteDecimal);
            if (parteDecimal == 0) {
                break;
            }
        }
    }

    return binario;
}

int main() {
    double numeroDecimal;

    cout << "Ingrese un numero decimal: ";
    cin >> numeroDecimal;

    string binarioResultante = decimalABinario(numeroDecimal);

    cout << "El equivalente binario es: " << binarioResultante << endl;

    return 0;
}
