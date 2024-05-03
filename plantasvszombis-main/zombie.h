#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>


class Zombie {
protected:
    std::string nombre;
    int resistencia;
    int velocidad;
    int vida;

public:
    // Constructor
    Zombie(std::string nombre, int resistencia, int velocidad, int vida) 
        : nombre(nombre), resistencia(resistencia), velocidad(velocidad), vida(vida) {}

    // Métodos para acceder a los atributos
    std::string getNombre() const { 
      return nombre; }
    int getResistencia() const { 
      return resistencia; }
    int getVelocidad() const { 
      return velocidad; }
    int getVida() const { 
      return vida; }

    // Métodos para modificar los atributos
    void setNombre(const std::string& nombre) { 
      this->nombre = nombre; }
    void setResistencia(int resistencia) { 
      this->resistencia = resistencia; }
    void setVelocidad(int velocidad) { 
      this->velocidad = velocidad; }
    void setVida(int vida) { 
      this->vida = vida; }

    // Método para imprimir los atributos del zombie
    void mostrarInformacion() const {
        std::cout << "Nombre: " << nombre << std::endl;
        std::cout << "Resistencia: " << resistencia << std::endl;
        std::cout << "Velocidad: " << velocidad << std::endl;
        std::cout << "Vida: " << vida << std::endl;
    }
};

class Zombi : public Zombie {
public:
    // Constructor
    Zombi() : Zombie("Zombi", 100, 1, 10) {}
};

class ZombiAbanderado : public Zombie {
public:
    // Constructor
    ZombiAbanderado() : Zombie("Zombi Abanderado", 150, 1, 10) {}
};

class ZombiCaracono : public Zombie {
public:
    // Constructor
    ZombiCaracono() : Zombie("Zombi Cara de Cono", 80, 1, 28) {}
};

class Zombisaltador : public Zombie {
public:
    // Constructor
    Zombisaltador() : Zombie("Zombi saltador", 120, 2, 17) {}
};

class ZombiConGlobo : public Zombie {
public:
    // Constructor
    ZombiConGlobo() : Zombie("Zombi con Globo", 80, 1, 11) {}
};

class Zombistein : public Zombie {
public:
    // Constructor
    Zombistein() : Zombie("Zombistein", 200, 1, 150) {}
};

#endif // ZOMBIE_H
