// Fernando de Jesús Mendivil Terminel - A00232280
// TC1030 grupo 700
// 19 de mayo del 2021

#include "HerenciaPersona.h"

class Maestro: public Persona{
    public:
        Maestro();
        Maestro(string, int, string);
        string get_depto(){return depto;};
        void set_depto();
        void muestra_datos();
    private:
        string depto;
};
Maestro::Maestro() : Persona(){
    depto = "Ninguno";
};
Maestro::Maestro(string n, int e, string d) : Persona(n, e){
    depto = d;
};
void Maestro::set_depto(){
    cout<< "Introduce el departamento de " << nombre << ": ";
    cin>>depto;
};
void Maestro::muestra_datos(){
    cout<<"Nombre\t\tEdad\tDepartamento"<<endl; 
    cout<< nombre << "\t" <<edad<<"\t"<<depto << endl;
};