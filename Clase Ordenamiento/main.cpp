#include <iostream>
#include "Sort.hpp"
using namespace std;

int main()
{
    Sort arreglo;
    arreglo.getElements(9);
    arreglo.bubble();
    arreglo.printElements();

    return 0;
}
