#include <iostream>
#include "../Pila/Pila.h"
#include <string.h>

using namespace std;

int main() {
    char palabra[10];
    cin>>palabra;

    Pila<char> pil;

    unsigned l = strlen(palabra);
    for(int i=0; i<l; i++){
        pil.push(palabra[i]);
    }
    for (int i=0; i<l; i++){
        cout<<pil.pop();
    }


    std::cout << "Ejercicio 03/01\n" << std::endl;
    return 0;
}