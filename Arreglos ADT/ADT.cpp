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

void ADT::borrarElemento(int indice) {
    if(indice >= 0 && indice < longitud) {
        for(int i = indice; i < longitud; i++) {
            Elementos[i] = Elementos[i+1];
        }
        Elementos[longitud-1] = 0;
        longitud--;
    }
}

/***************************************/
//Retorna el indice donde se encuentra
//el elemento a buscar, si no se encuen-
//tra, regresa un -1
/***************************************/
int ADT::busquedaLineal(int elemento) {
    for(int i = 0; i < longitud; i++) {
        if(elemento == Elementos[i]) {
            return i;
        }
    }
    return -1;
}

/***************************************/
//Retorna el indice donde se encuentra
//el elemento a buscar, si no se encuen-
//tra, regresa un -1
/***************************************/
int ADT::busquedaBinariaLoop(int elemento) {
    int bajo = 0;
    int alto = longitud - 1;
    int medio = 0;

    while(bajo <= alto) {
        int medio = (bajo + alto) / 2;
        if(elemento == Elementos[medio]) {
            return medio;
        }
        else if(elemento > Elementos[medio]) {
            bajo = medio + 1;
        }
        else {
            alto = medio - 1;
        }
    }

    return -1;
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