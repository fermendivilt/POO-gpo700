#ifndef Personaje_h
#define Personaje_h

class Base_Personajes {
    public:
        Base_Personajes();
        Base_Personajes(int, int, string);
        void setNivel(int n){nivel = n; dano_base = 15 + nivel*2;};
        double getDano_Base(){return dano_base;};
        void Correr();
        void Saltar();
        virtual double Shoot() = 0;
        int getRandom();
        string getNombre(){return nombre;};
        void addItemFlower(Flowers);
        void addItemWeapon(listWea);
        void use(int);
        void equip(int);
        void receiveDamage(int D){vida_act -= D;};
        void showInventory();
        void muerte();
        void showVida();
    protected:
        vector <Item*> vecItems;
        int nivel;
        double dano_base;
        int vida_act;
        int vida_max;
        int aguante;
        string direccion;
        string nombre;
};
Base_Personajes::Base_Personajes(){
    nivel = 1;
    vida_max = 0;
    vida_act = vida_max;
    dano_base = 15;
    nombre = "";
    aguante = 0;
}
Base_Personajes::Base_Personajes(int ni, int vid, string no){
    nivel = ni;
    vida_max = vid;
    vida_act = vida_max;
    aguante = 0;
    dano_base = 15 + nivel*2;
    nombre = no;
};
void Base_Personajes::Correr(){
    cout<<"Hacia donde quiere "<<nombre<<" correr? Solo una palabra por favor: ";
    cin>>direccion;
    cout<<nombre<<" camina hacia "<<(direccion)<<"; no hay nada."<<endl;
}
void Base_Personajes::Saltar(){
    cout<<nombre<<" ha saltado."<<endl;
}
double Base_Personajes::Shoot(){
    cout<<"ERROR"<<endl;
    return 0.0;
}
int Base_Personajes::getRandom() {
    srand(time(0));
    return (rand() % 5 + 1);
}
void Base_Personajes::addItemFlower(Flowers in){
    Item *objItems;

    objItems = new Flower(in);

    vecItems.push_back(objItems);
}
void Base_Personajes::use(int i){
    vecItems[i]->use_equip();
}
void Base_Personajes::addItemWeapon(listWea in){
    Item *objItems;

    objItems = new Weapon(in);

    vecItems.push_back(objItems);
}
void Base_Personajes::equip(int i){
    vecItems[i]->use_equip();
}
void Base_Personajes::showInventory(){
    cout<<endl;
    cout<<"------- Inventario --------"<<endl;
    for (int i=0;i<vecItems.size();i++){
        vecItems[i]->desc();
    }
    cout<<endl;
}
void Base_Personajes::showVida(){
    cout<<endl;
    cout<<"------- Vida -------"<<endl;
    cout<<"Vida actual  //  Vida maxima"<<endl;
    cout<<"\t"<<vida_act<<"  //  "<<vida_max<<endl;
};

#endif