#include <iostream>
#include "Constructor.hpp"
using namespace std;

int main() {
    Constructor sujeto1;
    sujeto1.datos();

    Constructor sujeto2("Madi", 73);
    sujeto2.datos();

    Constructor sujeto3("Jimena", 10, 135);
    sujeto3.datos();

    Constructor sujeto4("Miguel", 33, 180, 80);
    sujeto4.datos();

    return 0;
}