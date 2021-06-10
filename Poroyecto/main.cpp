// Fernando de Jesús Mendivil Terminel - A00232280
// Randy Oliver Ortega Cota - A00232304
// TC1030 grupo 700
// 30 de mayo del 2021
#include <iostream>
#include <string>
#include <ctime>
#include <windows.h>
#include <cstdlib>
#include <vector>
using namespace std;

#include "Flower.h"
#include "Weapon.h"
#include "LaserMan.h"
#include "ArrowWoman.h"
#include "Room.h"

int main(){
    double dano_personaje1 = 0.00;
    double dano_personaje2 = 0.00;

    Base_Personajes *NoPlayChars[2];
    Base_Personajes *objPersonaje;

    objPersonaje = new LaserMan(4, 6, "Barret");
    NoPlayChars[0] = objPersonaje;

    objPersonaje = new ArrowWoman(30, 4, "Elise");
    NoPlayChars[1] = objPersonaje;

    //delete objPersonaje; pasan cosas loks si lo uso esto D:

    NoPlayChars[0]->addItemFlower(Fuerza);
    NoPlayChars[0]->addItemWeapon(Espada);
    NoPlayChars[0]->showInventory();
    NoPlayChars[0]->use(0); //falta hacer que se elimine 
    NoPlayChars[0]->equip(1); //falta hacer que se implemente

    cout<<endl;

    NoPlayChars[1]->addItemFlower(Vida);
    NoPlayChars[1]->addItemFlower(Resistencia);
    NoPlayChars[1]->addItemWeapon(Nada);
    NoPlayChars[1]->addItemWeapon(Daga);
    NoPlayChars[1]->showInventory();
    NoPlayChars[1]->use(0);
    NoPlayChars[1]->use(1);
    NoPlayChars[1]->equip(2);
    NoPlayChars[1]->equip(3);

    /*

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
    static_cast<LaserMan *>(NoPlayChars[0])->showCargador();
    static_cast<LaserMan *>(NoPlayChars[0])->showCapacidad();
    static_cast<LaserMan *>(NoPlayChars[0])->recarga();

    Sleep(2000);

    dano_personaje2 += NoPlayChars[1]->Shoot();
    static_cast<ArrowWoman *>(NoPlayChars[1])->showArrows();
    cout<<endl;
    Sleep(2000);                      
    static_cast<ArrowWoman *>(NoPlayChars[1])->addArrow(3);
    static_cast<ArrowWoman *>(NoPlayChars[1])->showArrows();
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
    */
    return 0;
};