#include "Item.h"

enum Flowers {Vida, Fuerza, Resistencia};
const char *arrConsum[] ={"vida","energia","resistencia"};

class Flower:public Item {
protected:
    Flowers consum;
public:
    Flower();
    Flower(Flowers, string, string);
    void use_equip();
    void desc();
};
Flower::Flower() : Item(){
    consum = Vida;
    cout<<"Obtuviste una flor de "<<arrConsum[consum]<<"."<<endl;
};
Flower::Flower(Flowers a_consum, string name, string description:Item(name, description){
    consum = a_consum;
    cout<<"Obtuviste una flor de "<<arrConsum[consum]<<"."<<endl;
};
void Flower::use_equip(){
    switch(consum) {
        case Vida:
        cout << "Has recuperado toda tu vida."<<endl;
        break;

        case Fuerza: 
        cout << "Tu potencial destructivo ha aumentado."<<endl;
        break;

        case Resistencia: 
        cout << "Has mejorado tu defensa."<<endl;
    };
};
void Flower::desc(){
    switch(consum) {
        case Vida:
        cout << "."<<endl;
        break;

        case Fuerza: 
        cout << "Tu potencial destructivo ha aumentado."<<endl;
        break;

        case Resistencia: 
        cout << "Has mejorado tu defensa."<<endl;
    };
}