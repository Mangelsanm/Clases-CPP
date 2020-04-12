#include <iostream>
#include "ADT.hpp"
using namespace std;

void ADT::obtenerElementos(int longitud) {
    this -> longitud = longitud;

    Elementos = new int[nElementos];

    for(int i = 0; i < longitud; i++) {
        cout << "Elemento[" << i << "]: " << flush;
        cin >> *(Elementos+i);
    }
}

void ADT::agregarElemento(int nuevoElemento) {
    Elementos[longitud] = nuevoElemento;
    longitud++;
}

void ADT::insertarElemento(int nuevoElemento, int indice) {
    for(int i = longitud; i > indice; i--) {
        Elementos[i] = Elementos[i-1];
    }
    Elementos[indice] = nuevoElemento;
    longitud++;
}

void ADT::mostrarElementos() {
    cout << endl;
    cout << "[" << flush;
    for(int i = 0; i < longitud; i++) {
        if(i < longitud - 1)
            cout << Elementos[i] << ", " << flush;
        else
            cout << Elementos[i] << flush;
    }
    cout << "]" << flush;
}