// Fernando de Jesús Mendivil Terminel - A00232280
// TC1030 grupo 700
// 19 de mayo del 2021

#include <string>
#include <iostream>
using namespace std;

class Persona {
    public:
        Persona();
        Persona(string, int);
        string get_nombre(){return nombre;};
        int get_edad(){return edad;};
/*        void set_edad(int e){edad = e;};
        void set_nombre(string n){nombre = n;}; */
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

class Estudiante: public Persona {
    public:
        Estudiante();
        Estudiante(string, int, string);
        string get_carrera(){return carrera;};
        // void set_carrera();
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
/*void Estudiante::set_carrera(){
    cout<< "Introduce la carrera de " << nombre << ": ";
    cin>>carrera;
};*/
void Estudiante::muestra_datos(){
    cout<<"Nombre\t\tEdad\tCarrera"<<endl; 
    cout<< nombre << "\t" <<edad<<"\t"<<carrera << endl;
};

class Maestro: public Persona{
    public:
        Maestro();
        Maestro(string, int, string);
        string get_depto(){return depto;};
        //void set_depto();
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
/*void Maestro::set_depto(){
    cout<< "Introduce el departamento de " << nombre << ": ";
    cin>>depto;
};*/
void Maestro::muestra_datos(){
    cout<<"Nombre\t\tEdad\tDepartamento"<<endl; 
    cout<< nombre << "\t" <<edad<<"\t"<<depto << endl;
};

int main() {
    Estudiante estudiantes[3];
    Maestro maestros[2];

    Estudiante e1("Fernando Men.", 19, "ITC");
    estudiantes[0] = e1;
    Estudiante e2("Oliver Ortega", 19, "ITC");
    estudiantes[1] = e2;
    Estudiante e3;
    estudiantes[2] = e3;

    Maestro m1("Abraham Aldaco", 20, "ITC");
    maestros[0] = m1;
    Maestro m2;
    maestros[1] = m2;
    
    estudiantes[0].muestra_datos();
    estudiantes[1].muestra_datos();
    estudiantes[2].muestra_datos();
    maestros[0].muestra_datos();
    maestros[1].muestra_datos();

    return 0;
}