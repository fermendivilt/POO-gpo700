// Fernando de Jesús Mendivil Terminel - A00232280
// Randy Oliver Ortega Cota - A00232304
// TC1030 grupo 700
// 30 de mayo del 2021
#include <iostream>
#include <string>
#include <ctime>
#include <windows.h>
#include <cstdlib>
using namespace std;

#include "LaserMan.h"
#include "ArrowWoman.h"

int main(){
    double dano_personaje1 = 0.00;
    double dano_personaje2 = 0.00;

    Base_Personajes *NoPlayChars[2];
    Base_Personajes *objPersonaje;

    objPersonaje = new LaserMan(4, 6, "Barret");
    NoPlayChars[0] = objPersonaje;

    objPersonaje = new ArrowWoman(30, 4, "Elise");
    NoPlayChars[1] = objPersonaje;

    cout<<"\"Hola! Soy "<<NoPlayChars[0]->getNombre()<<", y me dieron ganas de correr.\""<<endl;
    NoPlayChars[0]->Correr();
    cout<<endl;
    cout<<"\"Y yo "<<NoPlayChars[1]->getNombre()<<", y tengo ganas de saltar!.\""<<endl;
    NoPlayChars[1]->Saltar();
    cout<<endl;

    Sleep(1000);

    cout<<NoPlayChars[0]->getNombre()<<" y "<<NoPlayChars[1]->getNombre()<<" pelean!"<<endl;
    cout<<"RONDA 1"<<endl;
    Sleep(1000);

    dano_personaje1 += NoPlayChars[0]->Shoot();
    //NoPlayChars[0]->showCargador();
    //NoPlayChars[0]->showCapacidad();  //Funciones de la tarea 1
    //NoPlayChars[0]->recarga();        //que no funcionaron :(

    Sleep(2000);

    dano_personaje2 += NoPlayChars[1]->Shoot();
    //NoPlayChars[1].showArrows();
    //cout<<endl;
    //Sleep(2000);                      //Funciones de la tarea 1
    //NoPlayChars[1].addArrow(3);       //que no funcionaron :(
    //NoPlayChars[1].showArrows();
    Sleep(2000);
    cout<<endl;
    
    cout<<"RONDA 2"<<endl;
    Sleep(1000);

    dano_personaje1 += NoPlayChars[0]->Shoot();
    Sleep(2000);

    cout<<endl;

    dano_personaje2 += NoPlayChars[1]->Shoot();
    Sleep(2000);

    cout<<endl;
    cout<<"Danos:"<<endl;
    cout<<(NoPlayChars[1]->getNombre())<<": "<<dano_personaje2<<endl;
    cout<<(NoPlayChars[0]->getNombre())<<": "<<dano_personaje1<<endl;

    if(dano_personaje2>dano_personaje1){cout<<"Gano "<<(NoPlayChars[1]->getNombre())<<endl;};
    if(dano_personaje2<dano_personaje1){cout<<"Gano "<<(NoPlayChars[0]->getNombre())<<endl;};
    if(dano_personaje2==dano_personaje1){cout<<"Empate"<<endl;};

    return 0;
}