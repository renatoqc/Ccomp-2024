#include <iostream>
#include <string>
using namespace std;

const int TAMANO_TABLERO = 8;

void imprimirTablero(char tablero[TAMANO_TABLERO][TAMANO_TABLERO]) {
    for (int i = 0; i < TAMANO_TABLERO; ++i) {
        for (int j = 0; j < TAMANO_TABLERO; ++j) {
            std::cout << tablero[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    char tablero[TAMANO_TABLERO][TAMANO_TABLERO];

    // Inicializar el tablero con caracteres vacíos
    for (int i = 0; i < TAMANO_TABLERO; ++i) {
        for (int j = 0; j < TAMANO_TABLERO; ++j) {
            tablero[i][j] = '-';
        }
    }

    // Imprimir el tablero
    imprimirTablero(tablero);

    return 0;
}
