// Fernando de Jesús Mendivil Terminel - A00232280
// TC1030 grupo 700
// 20 de mayo del 2021

#include "HerenciaPersona.h"

class Estudiante: public Persona {
    public:
        Estudiante();
        Estudiante(string, int, string);
        string get_carrera(){return carrera;};
        void set_carrera();
        void muestra_datos();
    private:
        string carrera;
};
Estudiante::Estudiante() : Persona(){
    carrera = "Ninguna";
};
Estudiante::Estudiante(string n, int e, string c) : Persona(n, e){
    carrera = c;
};
void Estudiante::set_carrera(){
    cout<< "Introduce la carrera de " << nombre << ": ";
    cin>>carrera;
};
void Estudiante::muestra_datos(){
    cout<<"Nombre\t\tEdad\tCarrera"<<endl; 
    cout<< nombre << "\t" <<edad<<"\t"<<carrera << endl;
};