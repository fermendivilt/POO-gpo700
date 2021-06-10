// Fernando de Jesús Mendivil Terminel - A00232280
// Randy Oliver Ortega Cota - A00232304
// TC1030 grupo 700
// 10 de Junio del 2021
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

void Char_Choose(Base_Personajes *arr[]){
    string nombre;
    int opcion = 0;
    int confirm = 0;
    Base_Personajes *objPersonaje;

    cout<<(char)168<<"Cu"<<(char)160<<"l es tu nombre? Una palabra por favor: ";
    cin>>nombre;
    cout<<endl;

    do{
        do{
            cout<<nombre<<", ";
            cout<<(char)168<<"Qu"<<(char)130<<" eres? Escoge el n"<<(char)163<<"mero de la clase que quieres."<<endl;
            cout<<"1 : Hombre laser"<<endl;
            cout<<"2 : Mujer flecha"<<endl;
            cout<<"Clase: ";
            cin>>opcion;

            if (opcion != 1 && opcion != 2){cout<<"Inv"<<(char)160<<"lido; introduzca 1 o 2 para hombre laser o mujer flecha."<<endl;};
        } while (opcion != 1 && opcion != 2);

        if (opcion == 1){cout<<"\nHombre laser: mucho da"<<(char)164<<"o m"<<(char)160<<"gico, pero cargador limitado.";};
        if (opcion == 2){cout<<"\nMujer flecha: pega tan fuerte como flechas lance.";};
        cout<<"\n"<<(char)168<<"Es esta la clase que quieres? Introduce 1 para confirmar: ";
        cin>>confirm;
    } while (confirm != 1);

    if (opcion == 1){objPersonaje = new LaserMan(10, 1, nombre);};
    if (opcion == 2){objPersonaje = new ArrowWoman(100, 1, nombre);};

    arr[0] = objPersonaje;
}

int main(){
    Base_Personajes *PlayerTeam[1];
    Char_Choose(PlayerTeam);
    
    PlayerTeam[0]->Correr();
    PlayerTeam[0]->Shoot();
    return 0;
};

