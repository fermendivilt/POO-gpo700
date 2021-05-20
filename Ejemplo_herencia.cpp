//Código basado en: https://sites.google.com/site/tallerdesarrollodesoftware/herencia-en-c 

#include <iostream>
using namespace std;

// Definir una clase base para vehiculos
class vehiculo_rodante {
    public:
        vehiculo_rodante();
        vehiculo_rodante(int, int);
        void set_ruedas(int num) { ruedas = num;}
        int get_ruedas() { return ruedas; }
        void set_pasajeros(int num) { pasajeros = num; }
        int get_pasajeros() { return pasajeros; }
    protected:
        int ruedas;
        int pasajeros;
};
vehiculo_rodante::vehiculo_rodante(){
    ruedas = 0;
    pasajeros = 0;
};
vehiculo_rodante::vehiculo_rodante(int r, int p){
    ruedas = r;
    pasajeros = p;
};

// Definir un camion.
class camion : public vehiculo_rodante {
    public:
        camion();
        camion(int, int, int);
        void set_carga(int size) { carga = size; }
        int get_carga() { return carga; }
        void mostrar();
    protected:
        int carga;
};
camion::camion() : vehiculo_rodante(){
    carga = 0;
}
camion::camion(int r, int p, int c) : vehiculo_rodante(r, p){
    carga = c;
}

enum tipo {carro, van, camioneta}; //en el compilador: const int carro = 0; const int van = 1; ...

// Definir un automovil.
class automovil : public vehiculo_rodante {
    public:
        automovil();
        automovil(int, int, tipo);
        void set_tipo(tipo t) { tipo_de_carro = t; };
        enum tipo get_tipo() { return tipo_de_carro; };
        void mostrar();
    protected:
        enum tipo tipo_de_carro;
};
automovil::automovil() : vehiculo_rodante(){
    tipo_de_carro = carro;
};
automovil::automovil(int r, int p, tipo t) : vehiculo_rodante(r, p){
    tipo_de_carro = t;
};

void camion::mostrar()
{
    cout << "ruedas: " << get_ruedas() << "\n";
    cout << "pasajeros: " << get_pasajeros() << "\n";
    cout << "Capacidad de carga en pies cubicos: " << carga << "\n";
};

void automovil::mostrar()
{
    cout << "ruedas: " << get_ruedas() << "\n";
    cout << "pasajeros: " << get_pasajeros() << "\n";
    cout << "tipo: ";
    switch(get_tipo()) {
        case van:
        cout << "van\n";
        break;

        case carro: 
        cout << "carro\n";
        break;

        case camioneta: 
        cout << "camioneta\n";
        };
}

int main()
{
    camion c1(18, 2, 3200), c2, c_inexistente;
    automovil a1(4, 6, van), a2, a_inexistente;

    c2.set_ruedas(6);
    c2.set_pasajeros(3);
    c2.set_carga(1200);


    a2.set_ruedas(6);
    a2.set_pasajeros(3);
    a2.set_tipo(camioneta);

    cout<< "Camion 1:"<<endl;
    c1.mostrar();
    cout << "\n";
    cout<< "Camion 2:"<<endl;
    c2.mostrar();
    cout << "\n";
    cout<< "Camion inexistente:"<<endl;
    c_inexistente.mostrar();

    cout << "\n\n";

    cout<< "Carro 1:"<<endl;
    a1.mostrar();
    cout << "\n";
    cout<< "Carro 2:"<<endl;
    a2.mostrar();
    cout << "\n";
    cout<< "Carro inexistente:"<<endl;
    a_inexistente.mostrar();

    return 0;
}