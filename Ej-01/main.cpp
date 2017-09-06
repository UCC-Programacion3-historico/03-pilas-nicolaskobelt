#include <iostream>
#include "../Pila/Pila.h"

using namespace std;

int main() {
    char palabra[10];
    cin>>palabra;

    Pila<char> inv;

    unsigned l = strlen(palabra);
    for(int i=0; i<l; i++){
        inv.push(palabra[i]);
    }

    std::cout << "Ejercicio 03/01\n" << std::endl;
    return 0;
}