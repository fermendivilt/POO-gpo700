// Fernando de Jesús Mendivil Terminel - A00232280
// TC1030 grupo 700
// 20 de mayo del 2021
#ifndef HerenciaPersona_h
#define HerenciaPersona_h

#include <string>
#include <iostream>     //Estos no se ocupan porque en main se incluye
using namespace std;

class Persona {
    public:
        Persona();
        Persona(string, int);
        string get_nombre(){return nombre;};
        int get_edad(){return edad;};
        void set_edad(int e){edad = e;};
        void set_nombre(string n){nombre = n;}; 
        void muestra_datos();
    protected:
        string nombre;
        int edad;
};
Persona::Persona(){
    nombre = "Nadie";
    edad = 0;
};
Persona::Persona(string n, int e){
    nombre = n;
    edad = e;
};
void Persona::muestra_datos(){
    cout<<"Nombre\tEdad"<<endl; 
    cout<< nombre << "\t" << edad << endl;
};

#endif