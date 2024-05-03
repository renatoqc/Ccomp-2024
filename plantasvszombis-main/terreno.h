#ifndef TERRENO_H
#define TERRENO_H

#include <iostream>
#include "planta.h"
#include "zombie.h"
#include <iostream>
#include <vector>

class Terreno {
private:
    int nivel;
    std::vector<std::string> terreno;

public:
    // Constructor
    Terreno(int nivel) : nivel(nivel) {
        generarTerreno();
    }

    // Método para generar el terreno según el nivel
    void generarTerreno() {
        // Limpiar el terreno actual
        terreno.clear();
        
        // Generar terreno según el nivel
        switch(nivel) {
            case 1:
                // Nivel 1: una fila de césped
                terreno.push_back("Cesped");
                break;
            case 2:
                // Nivel 2: dos filas de césped
                terreno.push_back("Cesped");
                terreno.push_back("Cesped");
                break;
            case 3:
                // Nivel 3: tres filas de cesped
                terreno.push_back("Cesped");
                terreno.push_back("Cesped");
                terreno.push_back("Cesped");
                break;
            default:
                // Por defecto, generar una fila de césped
                terreno.push_back("Cesped");
                break;
        }
    }

    // Método para mostrar el terreno
    void mostrarTerreno() const {
        std::cout << "Terreno del nivel " << nivel << ":" << std::endl;
        for (const auto& fila : terreno) {
            std::cout << fila << std::endl;
        }
    }
};
#endif // TERRENO_H
