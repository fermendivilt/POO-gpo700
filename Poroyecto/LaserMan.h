#include "Personaje.h"

class LaserMan : public Base_Personajes {
    public:
        LaserMan();
        LaserMan(int, int, int, string);
        double Shoot();
        void showCargador();
        void showCapacidad();
        int getCargador();
        int getCapacidad();
        void recarga();
    private:
        int Capacidad;
        int Cargador;
};
LaserMan::LaserMan() : Base_Personajes() {
    Cargador = 4;
    Capacidad = 4;
};
LaserMan::LaserMan(int LimCargas, int nivel, int vida, string nom) : Base_Personajes(nivel, vida, nom) {
    Cargador = LimCargas;
    Capacidad = LimCargas;
};
double LaserMan::Shoot() {
    double dano;
    int ran = getRandom();
    if (ran >= 4){
        cout << getNombre()<<" se sobrecarga y dispara! Inflinge "<<(dano_base * (2.5))<<" de dano magico!!"<< endl;
        Cargador -= 2;
        dano = dano_base * (2.5);
    }else{
        cout << getNombre()<<" dispara! Inflinge "<<(dano_base * (1.5))<<" de dano magico."<< endl;
        Cargador -= 1;
        dano = dano_base * (1.5);
        };
    cout << "Le quedan " << Cargador << " disparos." << endl;
    return dano;
}
void LaserMan::showCargador() {
    cout <<"Al cargador le quedan "<<Cargador << " de "<< Capacidad <<" disparos."<< endl;
}
void LaserMan::showCapacidad() {
    cout <<"El cargador puede tener un maximo de "<< Capacidad <<" disparos."<< endl;
}
int LaserMan::getCargador() {
    return Cargador;
}
int LaserMan::getCapacidad(){
    return Capacidad;
}
void LaserMan::recarga(){
    Cargador = Capacidad;
    cout<<"Laserman ha recargado y esta listo para la accion."<<endl;
}