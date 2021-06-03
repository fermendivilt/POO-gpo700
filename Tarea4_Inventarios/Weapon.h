#include "Item.h"

enum listWea {Daga, Espada, Espada_larga};
const char *arrWea[] ={"Daga","Espada","Espada larga"};

class Weapon: public Item{
    private:
        listWea Wea;
        double damage_mod;
    public:
        Weapon();
        Weapon(listWea);
};
Weapon::Weapon():Item(){

};
Weapon::Weapon(listWea a_wea):Item(arrWea[a_wea]){

};