#ifndef Personaje_h
#define Personaje_h

class Base_Personajes {
    public:
        Base_Personajes();
        Base_Personajes(int, string);
        void setNivel(int n){nivel = n;};
        double getDamage(){return dano_base;};
        void Correr();
        void Saltar();
        virtual double Shoot() = 0;
        int getRandom();
        string getNombre(){return nombre;};
    protected:
        int nivel;
        double dano_base;
        string direccion;
        string nombre;
};
Base_Personajes::Base_Personajes(){
    nivel = 1;
    dano_base = 15;
    nombre = "";
}
Base_Personajes::Base_Personajes(int ni, string no){
    nivel = ni;
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
}
int Base_Personajes::getRandom() {
    srand(time(0));
    return (rand() % 5 + 1);
}

#endif