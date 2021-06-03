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
};
Weapon::Weapon():Item(){
    Wea = Nada;
    damage_mod = 0.0;
};
Weapon::Weapon(listWea a_wea):Item(arrWea[a_wea]){
    Wea = a_wea;
};