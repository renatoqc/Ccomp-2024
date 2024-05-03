#include <iostream>
#include "juego.h"
#include "planta.h"
#include "terreno"
#include "ventana.h"
#include "zombie.h"

int main(){
    
    //creacion de las plantas
    LanzaGuisantes lanzaGuisantes;
    lanzaGuisantes.mostrarInformacion();
    std::cout << std::endl;
    Girasol girasol;
    girasol.mostrarInformacion();
    std::cout << std::endl;
    Petacereza petacereza;
    petacereza.mostrarInformacion();
    std::cout << std::endl;
    Nuez nuez;
    nuez.mostrarInformacion();
    std::cout << std::endl;
    Patatapum patatapum;
    patatapum.mostrarInformacion();
    std::cout << std::endl;
    PlantaCarnivora plantaCarnivora;
    plantaCarnivora.mostrarInformacion();

    //creacion de los zombies
    Zombi zombi;
    zombi.mostrarInformacion();
    std::cout << std::endl;
    ZombiAbanderado zombiAbanderado;
    zombiAbanderado.mostrarInformacion();
    std::cout << std::endl;
    ZombiCaracono zombiCaracono;
    zombiCaracono.mostrarInformacion();
    std::cout << std::endl;
    ZombiDelfin zombiDelfin;
    zombiDelfin.mostrarInformacion();
    std::cout << std::endl;
    ZombiConGlobo zombiConGlobo;
    zombiConGlobo.mostrarInformacion();
    std::cout << std::endl;
    Zombistein zombistein;
    zombistein.mostrarInformacion();

    //generacion y vizualizacion del terreno
    Terreno terreno_nivel_1(1);
    terreno_nivel_1.mostrarTerreno();
    Terreno terreno_nivel_2(2);
    terreno_nivel_2.mostrarTerreno();
    Terreno terreno_nivel_3(3);
    terreno_nivel_3.mostrarTerreno();

    return 0;

}
