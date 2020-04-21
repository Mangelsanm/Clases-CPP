#include <iostream>
#include "ADT.hpp"
using namespace std;

/***************************************/
//Constructor
/***************************************/


/***************************************/
//Destructor
/***************************************/
ADT::~ADT() {
    delete [] Elementos;
}

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

/***************************************/
//Retorna el valor minimo del arreglo
/***************************************/
void ADT::min(){
    int minimo = Elementos[0];

    for(int i = 1; i < longitud; i++) {
        if(Elementos[i] < minimo)
            minimo = Elementos[i];
    }
    cout << "\n" << "Minimo: " << minimo << endl;
}

/***************************************/
//Retorna el valor maximo del arreglo
/***************************************/
void ADT::max(){
    int maximo = Elementos[0];

    for(int i = 1; i < longitud; i++) {
        if(Elementos[i] > maximo)
            maximo = Elementos[i];
    }
    cout << "\n" << "Maximo: " << maximo << endl;
}

/***************************************/
//Suma todos los elementos de un arreglo
//e imprime su valor.
/***************************************/
void ADT::suma() {
    int total = 0;
    for(int i = 0; i < longitud; i++)
        total = total + Elementos[i];
    cout << "\n" << "Suma de elementos: " << total << endl;
}

/***************************************/
//Promedio de los elementos del arreglo.
//Imprime el valor.
/***************************************/
void ADT::promedio() {
    float total = 0;
    for(int i = 0; i < longitud; i++)
        total = total + Elementos[i];
    total = total / longitud;
    cout << "\n" << "Promedio: " << total << endl;
}

/***************************************/
//Invierte el contenido de un arreglo.
//Imprime el resultado
/***************************************/
void ADT::invertir() {
    int izquierda = 0;
    int derecha = longitud - 1;
    int auxiliar = 0;

    for(; izquierda < derecha; izquierda++, derecha--) {
        auxiliar = Elementos[izquierda];
        Elementos[izquierda] = Elementos[derecha];
        Elementos[derecha] = auxiliar;
    }
    mostrarElementos();
}

/***************************************/
//Rotar a la izquierda
//Imprime el resultado
/***************************************/
void ADT::rotarIzquierda() {
    int auxiliar = Elementos[0];

    for(int i = 0; i < longitud - 1; i++) {
        Elementos[i] = Elementos[i+1];
    }
    Elementos[longitud-1] = auxiliar;
    mostrarElementos();
}

/***************************************/
//Rotar a la izquierda
//Imprime el resultado
/***************************************/
void ADT::rotarDerecha() {
    int auxiliar = Elementos[longitud-1];

    for(int i = longitud-1; i > 0; i--) {
        Elementos[i] = Elementos[i-1];
    }
    Elementos[0] = auxiliar;
    mostrarElementos();
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