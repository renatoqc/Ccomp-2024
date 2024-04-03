#include "pract1.h"
#include <iostream>
using namespace std;

int main(){

    
    int a;
    string n;

    cout << "Ingrese su nombre: ";
    getline(cin, n);
    cout << "Ingrese su edad: ";
    cin >> a;
    Student a1(n, a);

    cout << "  " << endl;
    cout << "NOMBRE: " << a1.getNombre() <<'\n' << "EDAD: "<< a1.getEdad() << endl;

    if(a1.isOlder()){
        cout << "ERES MAYOR DE EDAD !!";
    } 
    
    
    
}