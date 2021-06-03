#include "Item.h"

enum Flowers {Vida, Fuerza, Resistencia};
const char *arrConsum[] ={"Ipomoea","Hibisco","Gladiolo"};

class Flower:public Item {
protected:
    Flowers consum;
public:
    Flower();
    Flower(Flowers);
    void use_equip();
    void desc();
};
Flower::Flower() : Item(){
    consum = Vida;
    cout<<"Obtuviste un(a) "<<arrConsum[consum]<<"."<<endl;
};
Flower::Flower(Flowers a_consum):Item(arrConsum[a_consum]){
    consum = a_consum;
    switch(consum) {
        case Vida:
        description = "Observas la flor blanca, emana paz, te llena de determinacion.";
        break;

        case Fuerza: 
        description = "Observas la flor roja, sientes fuerza viniendo de ella, te llena de determinacion.";
        break;

        case Resistencia: 
        description = "Observas la flor amarilla, sientes firmeza y valor, te llena de determinacion.";
    };
    cout<<"Obtuviste una flor de "<<arrConsum[consum]<<"."<<endl;
};
void Flower::use_equip(){
    switch(consum) {
        case Vida:
        cout << "Observas la flor blanca, emana paz, te llena de determinacion."<<endl;
        break;

        case Fuerza: 
        cout << "Observas la flor roja, sientes fuerza viniendo de ella, te llena de determinacion."<<endl;
        break;

        case Resistencia: 
        cout << "Observas la flor amarilla, sientes firmeza y valor, te llena de determinacion."<<endl;
    };
};
void Flower::desc(){
    cout <<description<<endl;
}
