#include <iostream>
using namespace std;

class Constructor {
    private:
    string nombre;
    int edad;
    int altura;
    int peso;

    public:
    //Constructor sin parametros
    Constructor() {
        nombre = " ";
        edad = 0;
        altura = 0;
        peso = 0;
    }
    //Constructor con dos parametros
    Constructor(string nuevoNombre, int nuevaEdad) {
        nombre = nuevoNombre;
        edad = nuevaEdad;
        altura = 0;
        peso = 0;
    }
    //Constructor usando el mismo nombre que los miembros de datos (3 param.)
    Constructor(string nombre, int edad, int altura) {
        this -> nombre = nombre;
        this -> edad = edad;
        this -> altura = altura;
        peso = 0;
    }
    //Constructor usando el mismo nombre que los miembros de datos (4 param.)
    Constructor(string nombre, int edad, int altura, int peso): nombre(nombre),
                                                                edad(edad), 
                                                                altura(altura),
                                                                peso(peso) {}
    /*Constructor copia*/
    Constructor(const Constructor &otro);

    void datos() {
        cout << "nombre: " << nombre << endl;
        cout << "edad: " << edad << endl;
        cout << "altura: " << altura << endl;
        cout << "peso: " << peso << endl;
    }

};