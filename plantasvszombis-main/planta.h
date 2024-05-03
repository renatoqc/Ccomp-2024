#ifndef PLANTA_H
#define PLANTA_H
using namespace std;

#include <string>

class Planta {
protected:
    std::string nombre;
    int costo;
    int vida;
    int poder;

public:
    // Constructor
    Planta(std::string nombre, int costo, int vida, int poder) 
        : nombre(nombre), costo(costo), vida(vida), poder(poder) {}

    // Métodos para acceder a los atributos
    std::string getNombre() const { 
      return nombre; }
    int getCosto() const { 
      return costo; }
    int getVida() const { 
      return vida; }
    int getPoder() const { 
      return poder; }

    // Métodos para modificar los atributos
    void setNombre(const std::string& nombre) { 
      this->nombre = nombre; }
    void setCosto(int costo) { 
      this->costo = costo; }
    void setVida(int vida) { 
      this->vida = vida; }
    void setPoder(int poder) { 
      this->poder = poder; }

    // Método para imprimir los atributos de la planta
    void mostrarInformacion() const {
        std::cout << "Nombre: " << nombre << std::endl;
        std::cout << "Costo: " << costo << std::endl;
        std::cout << "Vida: " << vida << std::endl;
        std::cout << "Poder: " << poder << std::endl;
    }
};

class LanzaGuisantes : public Planta {
public:
    // Constructor
    LanzaGuisantes() : Planta("Lanzaguisantes", 100, 100, 20) {}
};

class Girasol : public Planta {
public:
    // Constructor
    Girasol() : Planta("Girasol", 50, 80, 0) {}
};

class Petacereza : public Planta {
public:
    // Constructor
    Petacereza() : Planta("Petacereza", 150, 150, 50) {}
};

class Nuez : public Planta {
public:
    // Constructor
    Nuez() : Planta("Nuez", 50, 200, 0) {}
};

class Patatapum : public Planta {
public:
    // Constructor
    Patatapum() : Planta("Patatapum", 75, 100, 100) {}
};

class PlantaCarnivora : public Planta {
public:
    // Constructor
    PlantaCarnivora() : Planta("Planta Carnívora", 125, 150, 40) {}
};

#endif