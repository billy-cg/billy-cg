#include <iostream>
#include <conio.h>     // Para _kbhit() y _getch()
#include <windows.h>   // Para Sleep()
#include <cstdlib>     // Para rand()
#include <ctime>       // Para time()

using namespace std;

bool gameOver;
const int width = 20;
const int height = 10;
int x, y, fruitX, fruitY, score;
enum eDirection { STOP = 0, LEFT, RIGHT, UP, DOWN };
eDirection dir;

void Setup() {
    gameOver = false;
    dir = STOP;
    x = width / 2;
    y = height / 2;
    srand(time(0));
    fruitX = rand() % width;
    fruitY = rand() % height;
    score = 0;
}

void Draw() {
    system("cls");  // limpia pantalla

    // Borde superior
    for (int i = 0; i < width + 2; i++)
        cout << "#";
    cout << endl;

    // Zona de juego
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (j == 0) cout << "#"; // borde izquierdo

            if (i == y && j == x)
                cout << "O"; // cabeza viborita
            else if (i == fruitY && j == fruitX)
                cout << "*"; // fruta
            else
                cout << " ";

            if (j == width - 1) cout << "#"; // borde derecho
        }
        cout << endl;
    }

    // Borde inferior
    for (int i = 0; i < width + 2; i++)
        cout << "#";
    cout << endl;

    cout << "Puntaje: " << score << endl;
}

void Input() {
    if (_kbhit()) {
        switch (_getch()) {
            case 'a': dir = LEFT; break;
            case 'd': dir = RIGHT; break;
            case 'w': dir = UP; break;
            case 's': dir = DOWN; break;
            case 'x': gameOver = true; break;
        }
    }
}

void Logic() {
    switch (dir) {
        case LEFT:  x--; break;
        case RIGHT: x++; break;
        case UP:    y--; break;
        case DOWN:  y++; break;
        default: break;
    }

    // colisión con paredes
    if (x < 0 || x >= width || y < 0 || y >= height)
        gameOver = true;

    // fruta comida
    if (x == fruitX && y == fruitY) {
        score += 10;
        fruitX = rand() % width;
        fruitY = rand() % height;
        gameOver = true; // para que sea un solo nivel
    }
}

int main() {
    Setup();
    while (!gameOver) {
        Draw();
        Input();
        Logic();
        Sleep(100); // milisegundos
    }

    system("cls");
    if (score > 0)
        cout << "¡Ganaste! Puntaje: " << score << endl;
    else
        cout << "Perdiste. ¡Intentalo de nuevo!" << endl;

    return 0;
}
