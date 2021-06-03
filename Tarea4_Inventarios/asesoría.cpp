#include <iostream>
#include <vector>
using namespace std;

class Item {
protected:
    int level;
    string name;
    string description;
    int HP_up;
public:
    Item();
    Item(int, string, string, int);
    virtual void use(); //virtual solo en declaracion
    virtual void desc();
};
Item::Item(){
    level = 0;
    name = "";
    description = "";
    HP_up = 9999;
}
Item::Item(int in_level, string in_name, string in_description, int in_HP_recover){
    level = in_level;
    name = in_name;
    description = in_description;
    HP_up = in_HP_recover;
}
void Item::use(){
    cout<<"ERROR: No hay un Item definido."<<endl;
}
void Item::desc(){
    cout<<"ERROR: No hay un Item definido."<<endl;
}

enum gemtype {Diamond, Ruby, Emerald, Sapphire}; //probabilidad?
const char *arrGems[] ={"diamante","rubi","esmeralda","safiro"};

class Gem:public Item {
protected:
    gemtype gem;
public:
    Gem();
    Gem(gemtype, int, string, string, int);
    void use();
    void desc();
};
Gem::Gem() : Item(){
    gem = Diamond;
    cout<<"Adicionaste una gema."<<endl;
};
Gem::Gem(gemtype a_gem, int level, string name, string description, int HP_Up):Item(level, name, description, HP_Up){
    gem = a_gem;
    cout<<"Adicionaste una "<<arrGems[a_gem]<<endl;
};
void Gem::use(){
    cout << "Acabas de usar una gema y ganaste"<<(gem*8 + 7)<<"mas vida."<<endl;
};
void Gem::desc(){
    cout<<"Tienes un(a) "<<arrGems[gem]<<endl;
}

enum potType {Health, Energy, Wisdom, Death};
const char *arrPots[] ={"Vida","Energia","Sabiduria","Moerte"};

class Potion:public Item {
protected:
    potType potion;
public:
    Potion();
    Potion(potType, int, string, string, int);
    void use();
    void desc();
};
Potion::Potion() : Item(){
    potion = Health;
    cout<<"Adicionaste una pocion."<<endl;
}
Potion::Potion(potType a_pot, int level, string name, string description, int HP_Up):Item(level, name, description, HP_Up){
    potion = a_pot;
    cout<<"Adicionaste una pocion de "<<arrPots[a_pot]<<endl;
}
void Potion::use(){
    switch(potion) {
        case Health:
        cout << "Acabas de coger una poción y ganaste mas vida."<<endl;
        break;

        case Energy: 
        cout << "Acabas de coger una poción y ganaste mas energia."<<endl;
        break;

        case Wisdom: 
        cout << "Acabas de coger una poción y ganaste mas inteligencia."<<endl;
        break;

        case Death: 
        cout << "Has muerto."<<endl;
        };
}
void Potion::desc(){
    cout<<"Tienes un(a) pocion de "<<arrPots[potion]<<endl;
}

class Personaje {
private:
    vector <Item*> vecItems; //en personaje
public:
    void addItemGem();
    void addItemPotion();
    void showInventory();
    virtual void Shoot(){cout<<"ERROR"<<endl;};
};
void Personaje::addItemGem(){
    Item *objItems;

    objItems = new Gem();

    vecItems.push_back(objItems);
}
void Personaje::addItemPotion(){
    Item *objItems;

    objItems = new Potion();

    vecItems.push_back(objItems);
}
void Personaje::showInventory(){
    cout<<endl;
    cout<<"------- Inventario --------"<<endl;
    for (int i=0;i<vecItems.size();i++){
        vecItems[i]->desc();
    }
}

//*****************************************************
class LaserMan : public Personaje {
    public:
        LaserMan();
        LaserMan(int);
        void Shoot();
    private:
        int Capacidad;
        int Cargador;
};
LaserMan::LaserMan(){
    Cargador = 4;
    Capacidad = 4;
};
LaserMan::LaserMan(int LimCargas) {
    Cargador = LimCargas;
    Capacidad = LimCargas;
};
void LaserMan::Shoot() {
    cout<<" dispara! Inflinge de daño magico."<< endl;
}
//*****************************************************

int main(){
    //vector<Personaje*> vecPersonajes;
    Personaje *objPersonaje;
    objPersonaje = new LaserMan;

    objPersonaje->addItemGem();
    objPersonaje->addItemPotion();

    objPersonaje->showInventory();
    int var = 130;
    cout<<"t"<<(char)var<<" de i"<<(char)var<<"rbamala"<<endl;
}