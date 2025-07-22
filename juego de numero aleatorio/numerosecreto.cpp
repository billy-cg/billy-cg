#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <limits> // Para limpiar el buffer del input

using namespace std;

int main() {
    // Inicializar el generador de numeros aleatorios
    srand(time(0));
    int numeroSecreto = rand() % 100 + 1; // Genera un numero entre 1 y 100
    int intento;
    int numeroDeIntentos = 0;
    vector<int> intentosAnteriores;
    bool adivinado = false;
    char opcion;

    cout << "Bienvenido al juego de adivinanza de numeros!" << endl;

    do {
        cout << "Intenta adivinar el numero secreto (entre 1 y 100): ";
        cin >> intento;

        // Validar si la entrada es un numero entero
        if (cin.fail()) {
            cout << "Entrada invalida! Por favor, ingresa un numero entero." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue; // Volver al inicio del bucle do-while
        }

        numeroDeIntentos++;
        intentosAnteriores.push_back(intento);

        if (intento < numeroSecreto) {
            cout << "El numero secreto es mayor." << endl;
        } else if (intento > numeroSecreto) {
            cout << "El numero secreto es menor." << endl;
        } else {
            cout << "Felicidades! ¡Adivinaste el numero secreto (" << numeroSecreto << ") en " << numeroDeIntentos << " intentos!" << endl;
            adivinado = true;
        }

        if (!adivinado) {
            cout << "¿Quieres seguir intentando? (s/n): ";
            cin >> opcion;
            switch (opcion) {
                case 'n':
                case 'N':
                    cout << "El numero secreto era: " << numeroSecreto << endl;
                    break;
                default:
                    break;
            }
        }

    } while (!adivinado && (opcion == 's' || opcion == 'S'));

    cout << "Historial de tus intentos: ";
    for (int i = 0; i < intentosAnteriores.size(); i++) {
        cout << intentosAnteriores[i] << (i == intentosAnteriores.size() - 1 ? "" : ", ");
    }
    cout << endl;

    cout << "Gracias por jugar!" << endl;

    return 0;
}
