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
        void muerte(int, int);
        void showVida();
        int getKarma(){return karma;};
        void goodKarma(){karma++; cout<<"Tu karma ha aumentado."<<endl;};
        void badKarma(){karma--; cout<<"Tu karma ha caido."<<endl;};
    protected:
        vector <Item*> vecItems;
        int nivel;
        double dano_base;
        int vida_act;
        int vida_max;
        int aguante;
        string direccion;
        string nombre;
        int karma;
};
Base_Personajes::Base_Personajes(){
    nivel = 1;
    vida_max = 0;
    vida_act = vida_max;
    dano_base = 15;
    nombre = "";
    aguante = 0;
    karma = 0;
}
Base_Personajes::Base_Personajes(int ni, int vid, string no){
    nivel = ni;
    vida_max = vid;
    vida_act = vida_max;
    aguante = 0;
    dano_base = 15 + nivel*2;
    nombre = no;
    karma = 0;
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
    vecItems.erase(vecItems.begin()+i);
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
void Base_Personajes::muerte(int busquedas, int flores){
    cout<<endl<<endl;
    int punt = karma + busquedas + flores;
    if (vida_act <= 0) {cout<<"Has muerto..."<<endl;};
    cout<<"Tu puntuacion es: "<<punt<<endl;
    system("pause");
}

#endif