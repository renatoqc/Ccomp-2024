#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Persona{
    protected:
        string nombre;
        int edad;
    public:
        Persona(string n="", int e=0) : nombre(n), edad(e) {}
        
        string getNombre() {
            return nombre;
        }
        void setNombre(string n) {
            nombre = n;
        }
        int getEdad() {
            return edad;
        }
        void setEdad(int e) {
            edad = e;
        }
        void display() {
            cout << "+---------------------+\n";
            cout << "| NOMBRE: " << setw(10) << left << nombre << " |\n";
            cout << "| EDAD  : " << setw(10) << left << edad << " |\n";
            cout << "+---------------------+\n";
        }

};        


