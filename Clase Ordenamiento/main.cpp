#include <iostream>
#include "Sort.hpp"
using namespace std;

int main()
{
    // prueba para el metodo burbuja
    Sort arreglo1;
    arreglo1.getElements(7);
    arreglo1.bubble();
    arreglo1.printElements();

    // prueba para el metodo quicksort
    Sort arreglo2;
    arreglo2.getElements(7);
    arreglo2.quickSort(0, 7);
    arreglo2.printElements();

    // prueba para el metodo burbuja bidireccional
    Sort arreglo3;
    arreglo3.getElements(7);
    arreglo3.burbujaBidi();
    arreglo3.printElements();

    return 0;
}
