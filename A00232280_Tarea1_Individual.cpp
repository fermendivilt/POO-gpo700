// Fernando de Jesús Mendivil Terminel - A00232280
// TC1030 grupo 700
// 23 de mayo del 2021
#include <iostream>
#include <string>
#include <ctime>
#include <windows.h>
#include <cstdlib>
using namespace std;

int getRandom() {
    return (rand() % 5 + 1);
}

class Base_Personajes {
    public:
        Base_Personajes();
        Base_Personajes(int);
        void setNivel(int n){nivel = n;};
        double getDamage(){return dano_base;};
        void Correr();
        void Saltar();
    protected:
        int nivel;
        double dano_base;
        string direccion;
};
Base_Personajes::Base_Personajes(){
    nivel = 1;
    dano_base = 15;
}
Base_Personajes::Base_Personajes(int n){
    nivel = n;
    dano_base = 15 + nivel*2;
};
void Base_Personajes::Correr(){
    cout<<"Hacia donde quieres correr? Solo una palabra por favor: ";
    cin>>direccion;
    cout<<"Caminas hacia "<<(direccion)<<"; no hay nada."<<endl;
}
void Base_Personajes::Saltar(){
    cout<<"Has saltado."<<endl;
}

class LaserMan : public Base_Personajes {
    public:
        LaserMan();
        LaserMan(int, int);
        double shootLaser(int);
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
LaserMan::LaserMan(int LimCargas, int nivel) : Base_Personajes(nivel) {
    Cargador = LimCargas;
    Capacidad = LimCargas;
};
double LaserMan::shootLaser(int ran) {
    double dano;
    if (ran >= 3){
        cout << "LaserMan se sobrecarga y dispara! Inflinge "<<(dano_base * (2.5))<<" de dano magico!!"<< endl;
        Cargador -= 2;
        dano = dano_base * (2.5);
    }else{
        cout << "LaserMan dispara! Inflinge "<<(dano_base * (1.5))<<" de dano magico."<< endl;
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

class ArrowJustice : public Base_Personajes {
    public:
        ArrowJustice();
        ArrowJustice(int, int);
        double shootArrow();
        void addArrow(int);
        void showArrows();
        int getArrows(){return numFlechas;};
        void setArrows(int n){numFlechas = n;};
    private:
        int numFlechas;
};
ArrowJustice::ArrowJustice() : Base_Personajes() {
    numFlechas = 30;
};
ArrowJustice::ArrowJustice(int flechas, int nivel) : Base_Personajes(nivel) {
    numFlechas = flechas;
};
void ArrowJustice::addArrow(int n){
    cout<<"ArrowJustice obtiene "<< n << " flechas." <<endl;
    numFlechas += n;
}
double ArrowJustice::shootArrow() {
    int n = getRandom();

    cout << "ArrowJustice tiro "<< n <<" flecha(s)! Inflinge "<<(dano_base * n)<<" de dano fisico. ";

    if (n == 5){cout<<"Que gran arquera!!";};
    cout<<endl;

    numFlechas = numFlechas - n;
    cout << "Le quedan " << numFlechas << " flechas." << endl;
    return (dano_base * n);
}
void ArrowJustice::showArrows() {
    cout << "A la aljaba de ArrowJustice le quedan "<<numFlechas << " flechas;" << endl;
    cout << "siempre puede comprar mas."<<endl;
}

int main(){
    cout<<time(0)<<endl;
    srand(time(0)); //semilla del randomizador; momento actual con precision de segundo

    LaserMan Barret(4, 6);
    ArrowJustice Alice(30, 4);
    double dano_barret = 0.00;
    double dano_alice  = 0.00;
    
    Barret.Correr();
    Sleep(1500);
    cout<<endl;
    Alice.Saltar();
    cout<<endl;
    cout<<endl;

    cout<<"RONDA 1"<<endl;
    Sleep(1000);

    dano_barret += Barret.shootLaser(getRandom());
    Barret.showCargador();
    Barret.showCapacidad();
    Barret.recarga();
    Sleep(2000);

    cout<<endl;

    dano_alice += Alice.shootArrow();
    Alice.showArrows();
    cout<<endl;
    Sleep(2000);
    Alice.addArrow(3);
    Alice.showArrows();
    Sleep(2000);

    cout<<endl;
    cout<<"RONDA 2"<<endl;
    Sleep(1000);

    dano_barret += Barret.shootLaser(getRandom());
    Sleep(2000);

    cout<<endl;

    dano_alice +=  Alice.shootArrow();
    Sleep(2000);

    cout<<endl;
    cout<<"Danos:"<<endl;
    cout<<"ArrowJustice: "<<dano_alice<<endl;
    cout<<"LaserMan: "<<dano_barret<<endl;

    if(dano_alice>dano_barret){cout<<"Gano ArrowJustice"<<endl;};
    if(dano_alice<dano_barret){cout<<"Gano LaserMan"<<endl;};
    if(dano_alice==dano_barret){cout<<"Empate"<<endl;};

    return 0;
}