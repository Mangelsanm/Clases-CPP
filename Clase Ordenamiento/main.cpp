#include <iostream>
#include "Sort.hpp"
using namespace std;

int main()
{
    Sort arreglo;
    arreglo.getElements(7);
    arreglo.bubble();
    arreglo.printElements();

    arreglo.getElements(7);
    arreglo.quickSort(0, 7);
    arreglo.printElements();

    return 0;
}
