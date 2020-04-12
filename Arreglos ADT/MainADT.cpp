#include <iostream>
#include "ADT.hpp"
using namespace std;

int main() {
    ADT arr;
    int longitud = 0;

    cout << "Longitud del arreglo: " << flush;
    cin  >> longitud;

    arr.obtenerElementos(longitud);
    arr.mostrarElementos();
    arr.agregarElemento(69);
    arr.agregarElemento(41);
    arr.mostrarElementos();
    arr.insertarElemento(10, 5);
    arr.mostrarElementos();

    return 0;
}