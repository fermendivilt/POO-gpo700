#include "Item.h"

enum listWea {Nada, Daga, Espada, Espada_larga};
const char *arrWea[] ={"Manos","Daga","Espada","Espada larga"};

class Weapon: public Item{
    private:
        listWea Wea;
        double damage_mod;
    public:
        Weapon();
        Weapon(listWea);
        void use_equip();
        void desc();
};
Weapon::Weapon():Item(){
    Wea = Nada;
    damage_mod = 0.0;
};
Weapon::Weapon(listWea a_wea):Item(arrWea[a_wea]){
    Wea = a_wea;
    damage_mod = (Wea*1.9) + 8;
    switch(Wea) {
        case Nada:
        description = "No tienes arma; no confias en nada mas que en tus propias manos.";
        break;

        case Daga: 
        description = "Una daga. Corta pero letal, rapida y mortal.";
        break;

        case Espada: 
        description = "Una espada. Clasica, algo pesada pero la puedes manejar con una mano.";
        break;

        case Espada_larga: 
        description = "Una espada larga. Muy pesada, pero muy eficiente, una estocada y el trabajo esta hecho.";
    };
    if (Wea != Nada){
        cout<<"Obtuviste una "<<arrWea[Wea]<<"."<<endl;
    }
};
void Weapon::use_equip(){
    cout<<"Has equipado: "<<name<<endl;
};
void Weapon::desc(){
    cout <<description<<endl;
};