//Fernando de Jesus Mendivil Terminel - A00232280
//TC1030 Grupo 700
//24 de mayo del 2021

#include "Forma.h"

class Rectangulo:public Forma {
public:
    Rectangulo();
    Rectangulo(int,int);
    void draw();
};
Rectangulo::Rectangulo() : Forma(){};
Rectangulo::Rectangulo(int valX, int valY):Forma(valX, valY){}
void Rectangulo::draw(){
    cout << "Soy un Rectangulo de " << getValX();
    cout << " por " << getValY() <<"."<<endl;
}