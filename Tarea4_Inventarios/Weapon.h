#include "Item.h"

enum listWea {Daga, Espada, Espada_larga};
const char *arrWea[] = {"daga","espada","espada larga"};

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
Weapon::Weapon(listWea in_wea):Item(arrWea[in_wea]){

};