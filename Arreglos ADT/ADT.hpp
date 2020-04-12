#include <iostream>
using namespace std;

class ADT {
    private:
    int *Elementos;
    int nElementos = 20;
    int longitud;

    public:
    void obtenerElementos(int longitud);
    void mostrarElementos();
    void agregarElemento(int nuevoElemento);
    void insertarElemento(int nuevoElemento, int indice);
    
};