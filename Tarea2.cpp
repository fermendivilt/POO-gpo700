#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Item {
protected:
    string descripcion;
public:
    Item();
    Item(string);
    virtual void Interaccion();
};
Item::Item(){
    descripcion = "";
}
Item::Item(string in_descripcion){
    descripcion = in_descripcion;
}
void Interaccion(){
    cout<<"ERROR NO ITEM"<<endl;
};

class Equipable: public Item{
    protected:
        double Tasa_Dano;
    public:
        Equipable();
        Equipable(string, double);
        void Interaccion();
};
Equipable::Equipable() : Item(){
    Tasa_Dano = 1;
};
Equipable::Equipable(string n, double td) : Item(n){
    Tasa_Dano = td;
}
void Equipable::Interaccion(){
    cout<<"Has equipado lo siguiente: "<< descripcion<<endl;
}

class Uso_Unico: public Item{
    protected:
        int Cantidad;
    public:
        Uso_Unico();
        Uso_Unico(string, int);
        void Interaccion();
};
Uso_Unico::Uso_Unico() : Item(){
    Cantidad = 0;
};
Uso_Unico::Uso_Unico(string n, int cant) : Item(n){
    Cantidad = cant;
}
void Uso_Unico::Interaccion(){
    cout<<"Has usado: "<< descripcion<<endl;
}

class Personaje{
    private:
        string nombre;
        vector <Item*> vecItems;
        int vida_actual;
        int vida_max;
        int Bondad;
    public:
        Personaje();
        Personaje(string, int);
        void abrir_puerta();
        void ataque_basico();
        void dialogar();
};
Personaje::Personaje(){
    nombre = "";
    vida_actual = 30;
    vida_max = vida_actual;
    Bondad = 0;
}
Personaje::Personaje(string n, int v_m){
    nombre = n;
    vida_actual = v_m;
    vida_max = v_m;
}
void Personaje::abrir_puerta(){
    cout<<"Has abierto una puerta."<<endl;
}
void Personaje::ataque_basico(){
    cout<<"Golpeas."<<endl;
}
void Personaje::dialogar(){
    cout<<"Hola, mi nombre es "<<nombre<<"."<<endl;;
}

class Monstruo{
    private:
        string nombre;
        int vida;
    public:
        Monstruo();
        Monstruo(string, int);
        virtual void ataque();
        virtual void dialogar();
};
Monstruo::Monstruo(){
    nombre = "";
    vida = 0;
}
Monstruo::Monstruo(string n, int v){
    nombre = n;
    vida = v;
}
void Monstruo::ataque(){
    cout<<"Monstruo ataca."<<endl;
}
void Monstruo::dialogar(){
    cout<<"Hola, yo soy "<<nombre<<"."<<endl;
}

class Jefe_Final{
    private:
        string nombre;
        int vida;
        int MAPEJ;
    public:
        Jefe_Final();
        Jefe_Final(string, int, int);
        void ataque();
        void dialogar();
        void desbloquear_puerta();
};
Jefe_Final::Jefe_Final(){
    nombre = "";
    vida = 0;
    MAPEJ = 0;
}
Jefe_Final::Jefe_Final(string n, int v, int mapej){
    nombre = n;
    vida = v;
    MAPEJ = mapej;
}
void Jefe_Final::ataque(){
    cout<<nombre<<"te ataca."<<endl;
}
void Jefe_Final::dialogar(){
    cout<<"Hola, soy "<<nombre<<"."<<endl;
}
void Jefe_Final::desbloquear_puerta(){
    cout<<"Ya puedes disputar contra el primer jefe."<<endl;
}

int main(){

}