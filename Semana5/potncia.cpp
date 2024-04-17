#include <iostream>
using namespace std;

int potencia ( int base, int exponente){
    int result = 1;
    for(int i = 0; i < exponente; i++){
        result *= base;
    }

    return result;
}

int main(){
    int tresExpoCuatro = potencia(3,4);
    cout <<" 3'4 es: " << tresExpoCuatro;
}