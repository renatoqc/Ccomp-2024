#include <iostream>
using namespace std;

bool esPrimo(int n){
    if(n % 2 == 0)
        return false;
    for(int i = 2; i <= n/2; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

void pritnprimo(int n){
    
}
int main(){
    long long numero;
    bool noEsprimo = false;
    cout << "ingrese un numero: ";cin>> numero;
}