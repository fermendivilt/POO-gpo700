//Fernando de Jesus Mendivil Terminel - A00232280
//TC1030 Grupo 700
//24 de mayo del 2021
#include <iostream>
#include <vector>
using namespace std;

#include "Rectangulo.h"
#include "Circulo.h"

int main(){
    // Forma *Formas[5]; // arreglo de objetos Forma
    vector<Forma*> vecFormas;
    Forma *objFormas;

    objFormas = new Circulo(5,6,7);
    vecFormas.push_back(objFormas);

    objFormas = new Rectangulo(5,8);
    vecFormas.push_back(objFormas);

    objFormas = new Circulo(3,5,9);
    vecFormas.push_back(objFormas);

    objFormas = new Rectangulo(2,3);
    vecFormas.push_back(objFormas);

    for (int i = 0; i<vecFormas.size(); i++){
        vecFormas[i]->draw();
    }

    return 0;
}