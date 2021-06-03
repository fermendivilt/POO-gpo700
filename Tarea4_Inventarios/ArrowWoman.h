#include "Personaje.h"

class ArrowWoman : public Base_Personajes {
    public:
        ArrowWoman();
        ArrowWoman(int, int, string);
        double Shoot();
        void addArrow(int);
        void showArrows();
        int getArrows(){return numFlechas;};
        void setArrows(int n){numFlechas = n;};
    private:
        int numFlechas;
};
ArrowWoman::ArrowWoman() : Base_Personajes() {
    numFlechas = 30;
};
ArrowWoman::ArrowWoman(int flechas, int nivel, string nom) : Base_Personajes(nivel, nom) {
    numFlechas = flechas;
};
void ArrowWoman::addArrow(int n){
    cout<<getNombre()<<" obtiene "<< n << " flechas." <<endl;
    numFlechas += n;
}
double ArrowWoman::Shoot() {
    int n = getRandom();

    cout << getNombre()<<" tiro "<< n <<" flecha(s)! Inflinge "<<(dano_base * n)<<" de dano fisico. ";

    cout<<endl;

    numFlechas = numFlechas - n;
    cout << "Le quedan " << numFlechas << " flechas." << endl;
    return (dano_base * n);
}
void ArrowWoman::showArrows() {
    cout << "A la aljaba de "<<getNombre()<<" le quedan "<<numFlechas << " flechas;" << endl;
    cout << "siempre puede comprar mas."<<endl;
}