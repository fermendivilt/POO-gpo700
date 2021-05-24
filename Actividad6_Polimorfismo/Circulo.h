//Fernando de Jesus Mendivil Terminel - A00232280
//TC1030 Grupo 700
//24 de mayo del 2021

#include "Forma.h"

class Circulo:public Forma {
private:
    int r;
public:
    Circulo();
    Circulo(int,int,int);
    void draw();
    int getRadio(){return r;};
};
Circulo::Circulo() : Forma(){
    r = 0;
}
Circulo::Circulo(int valX, int valY, int valR):Forma(valX, valY){
    r = valR;
}
void Circulo::draw(){
    cout << "Soy un Circulo de radio " <<getRadio();
    cout << " con centro en ("<<getValX()<<", "<<getValY()<<")."<<endl;
}