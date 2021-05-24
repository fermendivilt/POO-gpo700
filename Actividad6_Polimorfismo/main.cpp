//Fernando de Jesus Mendivil Terminel - A00232280
//TC1030 Grupo 700
//24 de mayo del 2021
#include <iostream>
using namespace std;

#include "Rectangulo.h"
#include "Circulo.h"

int main(){
    Forma *Formas[5]; // arreglo de objetos Forma

    Formas[0] = new Circulo();
    Formas[1] = new Rectangulo();
    Formas[2] = new Rectangulo(2, 3);
    Formas[3] = new Circulo(0, 0, 4);
    Formas[4] = new Rectangulo();

    for (int i = 0; i<5; i++){
        Forma *actual = Formas[i];
        actual->draw();
    }

    return 0;
}