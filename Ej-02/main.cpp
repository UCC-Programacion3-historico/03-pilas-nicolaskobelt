#include <iostream>
#include "../Pila/Pila.h"
#include <string.h>

using namespace std;

template <class T>
bool iguales(char palabra, char palabra2){
    Pila<char> p;
    Pila<char> p2;
    char temp;

    int tam=strlen(palabra);
    for (int i=0; i<tam; i++){
        p.push(palabra[i]);
    }
    tam=strlen(palabra2);
    for(int i=0; i<tam; i++){
        p2.push(palabra2[i]);
    }

    while (!p.esVacia() || !p2.esVacia()){
        if (p.pop()!=p2.pop())
            return false;
    }
    return true;
}

int main() {
    char palabra[10], palabra2[10];
    gets(palabra);
    gets(palabra2);

    if(iguales(palabra, palabra2)==false)
        cout<<"las palabras no son iguales"<<endl;
    else
        cout<<"Las palabras son iguales"<<endl;
}