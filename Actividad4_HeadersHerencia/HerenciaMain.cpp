// Fernando de Jesús Mendivil Terminel - A00232280
// TC1030 grupo 700
// 20 de mayo del 2021

#include <string>
#include <iostream>
using namespace std;

#include "HerenciaAlumno.h"
#include "HerenciaMaestro.h"

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